//integer array in reverse order
#include<stdio.h>
void print_reverse(int arr[], int size) {
    int *ptr = arr + size - 1;
    while (ptr >= arr) {
        printf("%d ", *ptr);
        ptr--;
    }
}
int main() {
    int i,size,arr[100];
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("enter the array elements");
    for ( i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    printf("the array in reverse order:");
    print_reverse(arr, size); 
    return 0;
}