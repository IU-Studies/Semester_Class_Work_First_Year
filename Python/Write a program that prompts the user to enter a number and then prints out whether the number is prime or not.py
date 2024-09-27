#Write a program that prompts the user to enter a number and then prints out whether the number is prime or not.

user = int(input("Enter a Number:-"))
for i in range(2,user):
  prime=True
  if (user%i==0):
    prime=False
    break
    
if(prime==True):
  print("Prime")
else:
  print("Not Prime")
