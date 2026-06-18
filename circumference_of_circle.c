#include<stdio.h>
int main (){
float const PI =3.14159;
float r,x;

printf("Enter the radius of a circle :\n");

scanf("%f", &r);

x=2*PI*r;
printf("The circumfrence of the circle is %.4f", x);



    return 0;
}