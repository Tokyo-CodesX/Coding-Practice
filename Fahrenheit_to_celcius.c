#include<stdio.h>
int main (){
float f,c;
printf("Enter the temperature in fahrenheit: \n");
scanf("%f", &f);
c= (f-32)/9*5;
printf("The temperature in celcius is %.3f ", c);




    return 0;
}