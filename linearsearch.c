//linearsearch 
#include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for (int i = 0; i <size; i++)
    {
        if (arr[i]==element) return i;
        
    } 
    return -1; 
}
int main (){
int element,i;
int arr[]={1,84,7,54,664,246,764};
int size=sizeof(arr)/sizeof(int);
printf("enter the element to be found");
scanf("%d",&element);
int searchindex=linearsearch(arr,size,element);
if(searchindex==-1){
    printf("the element was not found");
}
else printf("%d was found at index %d",element,searchindex);
return 0;
}