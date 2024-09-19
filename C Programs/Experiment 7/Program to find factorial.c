// Write a C program to find factorial of any number.

#include <stdio.h>
#include <conio.h>

int main (){
int number, i, count = 1;
clrscr();

printf("Enter a number:-");
scanf("%d",&number);

for (i=1; i<=number; i++) count = count * i;

printf("Factorial of %d is %d",number, count);
getch();
return 0;
}
