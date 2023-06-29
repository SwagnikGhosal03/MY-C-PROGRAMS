#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int day;
    int month;
    int year;
}DATE;

int isLeapYear(int year){
    if(year%400 == 0)
        return 1;
    if(year%100 == 0)
        return 0;
    if(year%4 == 0)
        return 1;
    return 0;
}

int daysInMonth(int month, int year){
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(month == 2 && isLeapYear(year))
        return 29;
    return days[month-1];
}

DATE nextDate(DATE d){
    DATE nd;
    nd.day = d.day+1;
    nd.month = d.month;
    nd.year = d.year;
    if(nd.day > daysInMonth(nd.month, nd.year)){
        nd.day = 1;
        nd.month++;
        if(nd.month > 12){
            nd.month = 1;
            nd.year++;
        }
    }
    return nd;
}

DATE nextMonth(DATE d){
    DATE nm;
    nm.day = d.day;
    nm.month = d.month+1;
    nm.year = d.year;
    if(nm.month > 12){
        nm.month = 1;
        nm.year++;
    }
    return nm;
}

DATE nextYear(DATE d){
    DATE ny;
    ny.day = d.day;
    ny.month = d.month;
    ny.year = d.year+1;
    return ny;
}

DATE addDays(DATE d, int days){
    DATE ad;
    ad.day = d.day+days;
    ad.month = d.month;
    ad.year = d.year;
    while(ad.day > daysInMonth(ad.month, ad.year)){
        ad.day -= daysInMonth(ad.month, ad.year);
        ad.month++;
        if(ad.month > 12){
            ad.month = 1;
            ad.year++;
        }
    }
    return ad;
}

DATE addMonths(DATE d, int months){
    DATE am;
    am.day = d.day;
    am.month = d.month+months;
    am.year = d.year;
    while(am.month > 12){
        am.month -= 12;
        am.year++;
    }
    while(am.day > daysInMonth(am.month, am.year)){
        am.day -= daysInMonth(am.month, am.year);
        am.month++;
        if(am.month > 12){
            am.month = 1;
            am.year++;
        }
    }
    return am;
}

DATE addYears(DATE d, int years){
    DATE ay;
    ay.day = d.day;
    ay.month = d.month;
    ay.year = d.year+years;
    return ay;
}

char* monthName(int month){
    char* names[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    return names[month-1];
}

void displayDate(DATE d){
    printf("%02d-%02d-%04d\n", d.day, d.month, d.year);
}

void displayDateInDDMMYYFormat(DATE d){
    printf("%02d.%02d.%02d\n", d.day, d.month, d.year%100);
}

int main(){
    DATE d = {31, 12, 2020};
    displayDate(d);
    displayDateInDDMMYYFormat(d);
    DATE nd = nextDate(d);
    displayDate(nd);
    DATE nm = nextMonth(d);
    displayDate(nm);
    DATE ny = nextYear(d);
    displayDate(ny);
    DATE ad = addDays(d, 10);
    displayDate(ad);
    DATE am = addMonths(d, 15);
    displayDate(am);
    DATE ay = addYears(d, 5);
    displayDate(ay);
    printf("%s\n", monthName(d.month));
    return 0;
}