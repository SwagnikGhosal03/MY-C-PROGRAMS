//sum of all integers in an array using function
#include <stdio.h>
int sum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}
int main(){
    int n,i,arr[100];
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for ( i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int result = sum(arr, n);
    printf("Sum of all integers in array: %d\n", result);
    return 0;
}