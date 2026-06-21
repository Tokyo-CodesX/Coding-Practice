#include<stdio.h>
int main(){
    char upper, lower, prev, next, diff;
    printf("Enter a lowercase letter :\n");
    scanf("%c", &lower);
    upper = lower - 32;
    prev = (lower - 32)-1;
    next = (lower - 32)+1;
    diff=(lower- prev);
    printf("The uppercase letter is %c.\nTHe previous letter is %c.\nThe next letter is %c.\nThe difference is %d", upper, prev, next, diff);





    return 0;
}