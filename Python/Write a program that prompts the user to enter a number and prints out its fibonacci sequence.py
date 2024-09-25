#Write a program that prompts the user to enter a number and prints out its fibonacci sequence.

num0 = int(input("Enter a number:- "))
num1 = 0
num2 = 1
print("Fibonacci Series:", num1, num2, end=" ")
for i in range(2, num0):
  num3 = num1+num2
  num1 = num2
  num2 = num3
  print(num3, end=" ")
