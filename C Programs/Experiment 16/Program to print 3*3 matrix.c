// Write a program to print 3*3 matrix.

#include <stdio.h>
#include <conio.h>

int main() {
int arr[3][3], i, j;
clrscr();

printf("Enter elements in array:-");

for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
scanf ("%d",&arr[i][j]);}
}

for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
printf("%d ",arr[i][j]);}
printf("\n");
}

getch();
return 0;
}


