#include<stdio.h>
int main (){
float const PI =3.14159;
float r,x;

printf("Enter the radius of a circle :\n");

scanf("%f", &r);

x=PI*r*r;
printf("The area of the circle is %.4f", x);



    return 0;
}