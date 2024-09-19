 // Write a C program to display fibonacci sequence.

 #include <stdio.h>
 #include <conio.h>

 int main() {
 int a=0, b=1, user, c, i;
 clrscr();
 printf("Enter series length:-");
 scanf("%d", &user);

 if (user == 1) printf("%d",a);
 else{
 printf("%d ",a);
 printf("%d ",b);

 for (i = 1; i <= user; i++){
 c=a+b;
 a=b;
 b=c;

 printf("%d ",c);
 }
 }
 getch();
 return 0;
 }
