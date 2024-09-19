// Write a C program to check given year is leap or not.

#include <stdio.h>
#include <conio.h>

int main() {
int year;
clrscr();

printf("Enter year:-");
scanf("%d",&year);

if ((year%400 == 0) || ((year%4 == 0) && (year%100 != 0))) printf("Leap Year");
else printf("Not Leap");
getch();
return 0;
}
