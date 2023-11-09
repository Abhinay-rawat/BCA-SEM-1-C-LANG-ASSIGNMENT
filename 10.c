#include<stdio.h>
int main()
{
float hour ;
float minute ;
float days;

printf("ABHINAY SINGH RAWAT \n 1-B \n 321\n");

printf("enter the hour : \n");
scanf("%f" , &hour );

float hourtominutes = hour*60;
printf("hour to minutes =%.2f \n" , hourtominutes );

float hourtoseconds = hour*3600;
printf("hour to seconds =%.2f \n", hourtoseconds);

printf("enter the minute = \n");
scanf("%f" , &minute);

float  minutetoseconds = minute*60;
printf("minute to seconds = %.2f \n" , minutetoseconds);
//86400
printf("enter days =\n");
scanf("%f" , &days);

float daystoseconds = days*86400;
printf("days to seconds = %.2f \n" , daystoseconds);

return 0;
}