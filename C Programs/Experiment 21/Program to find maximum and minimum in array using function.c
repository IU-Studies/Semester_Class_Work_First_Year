 // Write a C program to find maximum and minimum in array using function.

 #include <stdio.h>
 #include <conio.h>

 void Max_Min_Array(int arr[], int length){
 int i, max = arr[0], min = arr[0];

 for (i = 0; i < length; i++){
 if (arr[i] > max) max = arr[i];
 if (arr[i] < min) min = arr[i];
 }
 printf("Max is %d and Min is %d",max, min);
 }

 int main () {
 int i, length, arr[100];
 clrscr();

 printf("Enter length of array:-");
 scanf("%d",&length);

 printf("Enter elements in array:-");
 for (i = 0; i < length; i++){
 scanf("%d",&arr[i]);
 }

 Max_Min_Array(arr, length);
 getch();
 return 0;
 }
