// Write a program for multiplication of two matrix.

#include <stdio.h>
#include <conio.h>

int main() {
int arrA[3][3], arrB[3][3], arrC[3][3], i, k, j;
clrscr();

printf("Enter elements in array A:-");
for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
scanf ("%d",&arrA[i][j]);}
}

printf("Enter elements in array B:-");
for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
scanf("%d",&arrB[i][j]);}
}

for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
arrC[i][j] = 0;}
}

for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
for (k = 0; k < 3; k++){
arrC[i][j] += arrA[i][k] * arrB[k][j];}
}
}

for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
printf("%d ",arrC[i][j]);}
printf("\n");
}

getch();
return 0;
}
