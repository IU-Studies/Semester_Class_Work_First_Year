// Write a C program for addition, substraction, multiplication and division of any numbers.

#include <stdio.h>
#include <conio.h>

int main() {
int num1, num2, result;
clrscr();
printf("Enter first number:-");
scanf("%d",&num1);
printf("Enter second number:-");
scanf("%d",&num2);
result = num1*num2;
printf("%d",result);
getch();
return 0;
}
