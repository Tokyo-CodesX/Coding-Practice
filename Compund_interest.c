#include<stdio.h>
#include<math.h>
int main(){
      float p, n, r, I;
printf("Please enter your principle amount: \n");
scanf("%f", &p);

printf("Please enter the amount of time(YY):  \n");
scanf("%f", &n);

printf("Please enter the rate of interst: \n");
scanf("%f", &r);
I= p* pow(1+r/100, n);
printf("The Compound interest is %.4f", I);
    return 0;
}