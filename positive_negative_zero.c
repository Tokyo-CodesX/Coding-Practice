#include<stdio.h>
int main (){
    float a;
printf("Please enter any number :\n");
scanf("%f", &a);
if(a==0){
    printf("The number is zero.");}
    else if(a>0) {
            printf("The number is positive.");}
        else 
{   printf("The number is negative.");
    }



    return 0;
}