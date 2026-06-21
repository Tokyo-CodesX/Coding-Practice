#include<stdio.h>
int main (){
    int year,total_days,week, days;
    printf("Enter the number of days: \n");
    scanf("%d", &total_days);
    year = total_days/365;
    total_days = total_days%365;
    week = total_days/7;
    days= total_days%7;
    printf("%d year %d weeks %d days", year, week , days);





    return 0;
}