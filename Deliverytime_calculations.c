#include<stdio.h>
int main(){
   
     int hour1, hour2, hour3;
     int min1, min2, min3;
     int sec1, sec2, sec3;

     int delivery1, delivery2, delivery3, total_time;

printf("Enter 1st delivery time in Hour, Min and Seconds :\n");
scanf("%d %d %d", &hour1, &min1, &sec1);
delivery1= hour1*3600 + min1*60 + sec1;
printf("Total time for your delivery 1 is %d seconds\n", delivery1);

printf("Enter 2nd delivery time in Hour, Min and Seconds :\n");
scanf("%d %d %d", &hour2, &min2, &sec2);
delivery2= hour2*3600 + min2*60 + sec2;
printf("Total time for your delivery 2 is %d seconds\n", delivery2);

printf("Enter 3rd delivery time in Hour, Min and Seconds :\n");
scanf("%d %d %d", &hour3, &min3, &sec3);
delivery3= hour3*3600 + min3*60 + sec3;
printf("Total time for your delivery 3 is %d seconds\n", delivery3);

total_time= delivery1+delivery2+delivery3;
printf("Total seconds= %d", total_time);

return 0;
}