// Write a C program to find area of various geographical objects.
// Area of triangle.

#include <stdio.h>
#include <conio.h>

int main (){
float base, height, area;
clrscr();
printf("Enter base of triangle:-");
scanf("%f",&base);
printf("Enter height of triangle:-");
scanf("%f",&height);
area = 0.5 * base * height;
printf("Area is %.2f", area);
getch();
return 0;
}
