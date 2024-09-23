// Write a C program that calculates and displays the sum and average of a set of numbers using pointer.

#include <stdio.h>
#include <conio.h>

void SumAndAverage(int *arr, int size, int *sum, float *average) {
*sum = 0;
int i;
for (i = 0; i < size; i++) {
*sum += *(arr + i);
}
*average = (float)(*sum)/size;
}

int main () {
int size, arr[100], sum, i;
float average;
clrscr();

printf("Enter size of array:-");
scanf("%d",&size);

printf("Enter elements in array:-");
for (i = 0; i < size; i++) {
scanf ("%d", &arr[i]);
}

SumAndAverage(arr, size, &sum, &average);
printf("Sum is %d", sum);
printf("\n");
printf("Average is %.2f", average);
getch();
return 0;
}
