#Write a program that prompts the user to enter tow number and then prints out whether the first number is greater than, less than, or equal to the second number.

num1 = float(input("Enter 1st number:-"))
num2 = float(input("Enter 2nd number:-"))

if num1 == num2:
  print (num1,"=",num2)
elif num1>num2:
  print (num1,">",num2)
else:
  print (num1,"<",num2)
