// Write a C program to calculate the sum of even numbers between a given range.

#include <stdio.h>
#include <conio.h>

int main(){
int start_range, end_range, i, count = 0;
clrscr();

printf("Enter a start range:-");
scanf("%d",&start_range);

printf("Enter a end range:-");
scanf("%d",&end_range);

for ( i = start_range; i <= end_range; i++) {
if (i%2 == 0) count = count + i;
else continue;
}
printf("The sum of even number in given range is %d",count);
getch();
return 0;
}
