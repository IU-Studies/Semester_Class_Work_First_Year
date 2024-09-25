#Write a program that prompts the user to enter a number and prints out weather it is prime or not.

a = int(input("Enter Number:-"))
for i in range (2,a):
  prime=True
  if(a%2==0):
    prime=False
    break
if(prime==True):
  print("Prime")
else:
  print("Not Prime")
