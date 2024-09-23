// Write a C program to swap two number using call by value using functions.

#include <stdio.h>
#include <conio.h>

void number_swap(int a, int b){
int c;
printf("Before swapping A is %d and B is %d",a,b);
c = a;
a = b;
b = c;
printf("\n");
printf("After swapping A is %d and B is %d",a,b);
}

int main () {
int num1, num2;
clrscr();
printf("Enter number one:-");
scanf("%d",&num1);

printf("Enter number two:-");
scanf("%d",&num2);

number_swap(num1, num2);

getch();
return 0;
}
