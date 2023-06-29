#include<stdio.h>
int binarysearch(int arr[],int size,int element){
    int low,mid,high;
   low=0;
   high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element)
        return mid;
        else if (arr[mid]<element)
        low=mid+1;
        else if(arr[mid]>element)
        high=mid-1;
    }
    return -1;
}
int main (){
int element;
int arr[]={1,2,5,7,9,45,67,89};
printf("enter the element to search");
scanf("%d",&element);
int size=sizeof(arr)/sizeof(int);
int index=binarysearch(arr,size,element);
if(index==-1)
printf("the element is not found");
else printf ("%d is found at index %d",element,index);
return 0;
}