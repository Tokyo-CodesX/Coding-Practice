#include<stdio.h>
int main(){
    float a, b, c, d, peri;
printf("Enter the sides of a rectangle: \n");

scanf("%f %f %f %f", &a, &b, &c, &d);

peri= a+b+c+d;
printf("The perimeter of the rectangle is %.4f unit", peri);

    return 0;
}