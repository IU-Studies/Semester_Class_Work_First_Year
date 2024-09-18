// Write a C program for various operator like logical, arithmetic, relational, operator.

#include <stdio.h>
#include <conio.h>

int main (){
int number;
clrscr();

printf("Enter a number:-");
scanf("%d",&number);

if (number%2 == 0) printf("Number is Even");
else printf("Number is odd");
getch();
return 0;
}
