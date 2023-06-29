//area & perimeter using pointer
#include <stdio.h>
void circle(float radius, float *area, float *circumference, float *perimeter) {
    *area = 3.14 * radius * radius;
    *circumference = 2 * 3.14 * radius;
    *perimeter = 2 * radius;
}
int main(){
    float radius, area, circumference, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circle(radius, &area, &circumference, &perimeter);
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Perimeter of the circle: %.2f\n", perimeter);
    return 0;
}