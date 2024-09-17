// Write a C program to find area of various geographical objects.
// Area of rectangle.

#include <stdio.h>
#include <conio.h>

int main (){
float length, breadth, area;
clrscr();
printf("Enter length of rectangle:-");
scanf("%f",&length);
printf("Enter breadth of rectangle:-");
scanf("%f",&breadth);
area = length * breadth;
printf("Area is %.2f", area);
getch();
return 0;
}
