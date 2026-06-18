#include<stdio.h>
int main(){
int age;
char first_name[20] ;
char last_name[20];

printf("Enter your first name :\n");
scanf("%s", &first_name);

printf("Enter your last name :\n");
scanf("%s", &last_name);

printf("Enter your age :\n");
scanf("%d", &age);

printf("Your full name is %s %s.\nYour age is %d", first_name, last_name, age);
    return 0;
}