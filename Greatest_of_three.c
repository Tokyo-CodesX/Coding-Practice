#include<stdio.h>
int main() {
    
    float a, b, c;
    printf("Enter three numbers: \n");
    scanf("%f %f %f", &a, &b, &c);
    printf("a=%.2f\nb=%.2f\nc=%.2f\n", a,b,c);
    if(a>b && a>c){
        printf("A is the greatest number");
    }
    else if (b>c){
        printf("B is the greatest number.");
    }

            else {printf("C is the greatest");}

    return 0;
}