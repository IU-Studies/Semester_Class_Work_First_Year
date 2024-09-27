#Write a program that prompts the user to enter a number and then prints out a message saying “The number number is even” or “The number number is odd”.

user = int(input("Enter a number to check whether it is even or odd:-"))
if user%2==0:
  print ("The number",user,"is Even")
else:
  print ("The number",user,"is Odd")
