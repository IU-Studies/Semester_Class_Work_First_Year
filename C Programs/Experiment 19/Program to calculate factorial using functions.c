// Write a C program to calculate factorial using functions.

#include <stdio.h>
#include <conio.h>

void factorial (int a){
int i, count = 1;
for (i = 1; i <= a; i++){
count = count * i;}
printf("Factorial of %d is %d",a,count);
}

int main () {
int user;
clrscr();
printf("Enter a number to get factorial:-");
scanf("%d",&user);
factorial(user);
getch();
return 0;
}
