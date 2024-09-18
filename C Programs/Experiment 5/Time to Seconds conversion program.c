// Write a C program for Time to Seconds conversion.

#include <stdio.h>
#include <conio.h>

int main (){
int hours, minutes, seconds, total_seconds;
clrscr();

printf("Enter number of hours:-");
scanf("%d",&hours);
printf("Enter number of minutes:-");
scanf("%d",&minutes);
printf("Enter numbers of seconds:-");
scanf("%d",&seconds);

total_seconds = (hours*3600) + (minutes*60) + seconds;
printf("Total seconds is %d",total_seconds);
getch();
return 0;
}
