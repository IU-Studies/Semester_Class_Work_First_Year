// Write a C program for an Electricity Bill.

#include <stdio.h>
#include <conio.h>

int main (){
float units, amount;
clrscr();
printf("Enter number of Units:-");
scanf("%f",&units);

if (units<100) amount = units * 3.5;
else if (units<200) amount = ((units - 100) * 4) + (100 * 3.5);
else if (units<300) amount = ((units - 200) * 5) + (100 * 4) + (100 * 3.5);
else amount = (units - 300) * 10 + (100 * 5) + (100 * 4) + (100 * 3.5);

printf("Your amount is %f",amount);
getch();
return 0;
}
