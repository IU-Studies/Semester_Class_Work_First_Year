# Write a program that prints the string "The square root of 2 is approximately 1.414" in a new line and then prints the square root of a number entered by user.

import math
print("The square root of 2 is approximately 1.414")
user = int(input("Enter a number to get Sq. Root:-"))
result = math.sqrt(user)
print(result)
