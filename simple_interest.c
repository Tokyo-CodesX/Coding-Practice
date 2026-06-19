#include<stdio.h>
int main(){
    
    float p, n, r, I;
printf("Please enter your principle amount: \n");
scanf("%f", &p);

printf("Please enter the amount of time(YY):  \n");
scanf("%f", &n);

printf("Please enter the rate of interst: \n");
scanf("%f", &r);
I= p*n*r/100;
printf("The simple interest is %.4f", I);
    return 0;
}