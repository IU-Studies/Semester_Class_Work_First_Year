 // Write a C program to find maximum and minimum in array.

 #include <stdio.h>
 #include <conio.h>

 int main () {
 int arr[100], i, user;
 clrscr();

 printf("Enter number of elements:-");
 scanf("%d",&user);

 printf("Enter elements in array:-");
 for (i = 0; i < user; i++){
 scanf("%d", &arr[i]);
 }

 int min = arr[0], max = arr[0];
 for (i = 0; i < user; i++){
 if (arr[i] > max) max = arr[i];
 if (arr[i] < min) min = arr[i];
 }

 printf("Max is %d and Min is %d", max, min);
 getch();
 return 0;
 }
