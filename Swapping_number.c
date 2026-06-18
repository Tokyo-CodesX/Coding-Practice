#include<stdio.h>
int main(){
    int a, b;
    printf("Enter 1st number :\n");
    scanf("%d", &a);
    printf("Enter 2nd number :\n");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\nb=%d", a, b);







    return 0;
}