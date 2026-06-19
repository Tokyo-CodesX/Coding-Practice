#include<stdio.h>
int main(){

int a,b;
printf("Please enter an integer number :\n");
scanf("%d", &a);
printf("the floating number is %f\n", (float)a);
printf("the double number is %.12lf\n", ( double)a);
printf("Please enter an integer number between(65-90) :\n");
scanf("%d", &b);

printf("the character is %c", (char)b);




    return 0;
}