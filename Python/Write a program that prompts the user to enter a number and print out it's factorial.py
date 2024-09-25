#Write a program that prompts the user to enter a number and print out it's factorial.

user = int(input("Enter a number to get it's factorial:-"))
a = 1
for i in range(user):
  num = i+1
  a = a*num
print("Factorial of",user,"is",a)
