#include<stdio.h>
int main (){
   int intime;
   int outtime;
   int hour, min, sec;
printf("Please enter your login time\n");
scanf("%d",&intime);
printf("Please enter your logout time\n");
scanf("%d", &outtime);
int total_time = outtime - intime;
printf("Total working time is %d Seconds which is ", total_time);

hour= total_time/3600;
min= total_time%3600/60;
sec= total_time%60;



printf("%d HH %d MM %d SS", hour, min, sec);



    return 0;
}