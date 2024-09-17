// Write a C program to find area of various geographical objects.
// Area of circle.

#include <stdio.h>
#include <conio.h>

int main (){
float radius, area;
clrscr();
printf("Enter radius of circle:-");
scanf("%f",&radius);
area = 3.14*radius*radius;
printf("Area is %f", area);
getch();
return 0;
}
