#include <stdio.h>

int main() {
    float mark;

    printf("Welcome to GPA calculator.\nEnter your marks:\n");
    scanf("%f", &mark);

    if (mark < 0 || mark > 100)
        printf("Invalid marks!");
    else if (mark >= 90)
        printf("Congratulations!!! You got A grade");
    else if (mark >= 75)
        printf("You got B grade");
    else if (mark >= 60)
        printf("You got C grade");
    else if (mark >= 30)
        printf("You got D grade");
    else
        printf("You are failed. Better luck next time");

    return 0;
}




}
