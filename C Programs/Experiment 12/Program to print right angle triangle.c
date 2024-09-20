// Write a C program to print the following patern.

#include <stdio.h>
#include <conio.h>

int main () {
int user,i,j;
clrscr();
printf("Enter number of rows:-");
scanf("%d",&user);

for (i = 1; i <= user; i++){
for (j = 1; j <= i; j++){ printf("* ");}
printf("\n");
}
getch();
return 0;
}
