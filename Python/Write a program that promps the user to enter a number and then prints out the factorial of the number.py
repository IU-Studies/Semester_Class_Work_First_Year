#Write a program that promps the user to enter a number and then prints out the factorial of the number.

user = int(input("Enter a number to get factorial:-"))
a = 1
for i in range(1,user+1):
  a = i*a
print(a)
