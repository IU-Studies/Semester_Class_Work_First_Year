// Write a C program to find area of various geographical objects.
// Area of square.

#include <stdio.h>
#include <conio.h>

int main (){
float side, area;
clrscr();
printf("Enter side of sqaure:-");
scanf("%f",&side);
area = side*side;
printf("Area is %.2f", area);
getch();
return 0;
}
