# Write a program that prompts the user to enter a number and then prints out a random number between 1 and that number.

import random
user = int(input("Enter a number:-"))
result = random.randint(1,user)
print(result)
