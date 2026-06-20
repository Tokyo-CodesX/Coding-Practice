#include<stdio.h>
int main(){
float mark;
printf("Welcome to GPA calculator.\nEnter your marks:\n");
scanf("%f", &mark);
if(mark>90 && mark<=100){
    printf("Congratulation!!! You got A grade");}
    
    else if(mark>75 && mark<=90){printf("You got B grade");}
    else if(mark>60 && mark<=75){printf("You got C grade");}
    else if(mark>30 && mark<=60){printf("You got D grade");}
    else {printf("You are failed. Better luck next time");}





}