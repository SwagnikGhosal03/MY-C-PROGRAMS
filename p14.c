#include <stdio.h>

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += (float)i/(2*i);
        } else {
            sum -= (float)i/(2*i);
        }
    }
    printf("The sum of the series is: %f\n", sum);
    return 0;
}