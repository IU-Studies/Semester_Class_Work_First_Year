#Write a program that prompts the user to enter a number and then prints out whether the number is a palindrome or not.
user = int(input("Enter a number to check Palindrome or Not:-"))
temp = user
rev = 0

while (user>0):
  dig = user%10
  rev = rev*10+dig
  user = user//10
if temp == rev:
  print("Palindrome")
else:
  print("Not a Palindrome")
