 // Write a C program to make a simple calculator using switch case.

 #include <stdio.h>
 #include <conio.h>

 int main () {
 char operator;
 int num1, num2, result;
 clrscr();

 printf("Enter operator (+, -, *, /):-");
 scanf("%c",&operator);

 printf("Enter two numbers:-");
 scanf("%d %d", &num1, &num2);

 switch(operator) {
 case '+':
 result = num1 + num2;
 printf("Addition is %d", result);
 break;

 case '-':
 result = num1 - num2;
 printf("Substraction is %d", result);
 break;

 case '*':
 result = num1 * num2;
 printf("Multiplication is %d", result);
 break;

 case '/':
 if (num2 != 0) {
 result = num1 / num2;
 printf("Division is %d", result);
 }
 else {printf("Error");}
 break;

 default:
 printf("Error");
 }
 getch();
 return 0;
 }
