// Write a C program to generate and display multiplication table for a given number.

#include <stdio.h>
#include <conio.h>

int main() {
int number, i;
clrscr();

printf("Enter a number:-");
scanf("%d",&number);

for (i = 1; i <= 10; i++){
printf("%d X %d = %d", number, i, number*i);
printf("\n");
};
getch();
return 0;
}
