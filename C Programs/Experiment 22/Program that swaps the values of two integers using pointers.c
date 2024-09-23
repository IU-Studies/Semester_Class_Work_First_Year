// Write a C program that swaps the values of two integers using pointers.

#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b);

int main() {
int num1, num2;
clrscr();

printf("Enter two numbers:-");
scanf("%d %d",&num1,&num2);

printf("Before swapping num1 is %d and num2 is %d",num1,num2);

swap (&num1, &num2);
printf("\n");
printf("After swapping num1 is %d and num2 is %d",num1,num2);
getch();
return 0;
}

void swap(int *a, int *b) {
int temp;
temp = *a;
*a = *b;
*b = temp;
}
