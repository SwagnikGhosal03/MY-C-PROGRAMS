//fibonacci series using recursion
#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int num;
    printf("enter the number of terms");
    scanf("%d", &num);
    printf("the fibonacci series is:");
    for (int i = 0; i <= num; i++)
    {
        printf("%d\t", fibonacci(i));
    }

    return 0;
}