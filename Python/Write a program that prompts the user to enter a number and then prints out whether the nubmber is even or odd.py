#Write a program that prompts the user to enter a number and then prints out whether the nubmber is even or odd.

user = int(input("Enter a number to check Even or Odd:-"))
if user%2 == 0:
  print(user,"is Even")
else:
  print(user,"is Odd")
