# Write a program that prompts the user to enter a number and then prints out a table of the quares and cubes of the number.

user = int(input("Enter a number to get it's Squares and Cubes:-"))
for i in range (1, user+1):
  square = i**2
  print (i,"** 2 =",square)
print ("")
for z in range (1, user+1):
  cube = z**3
  print (i,"** 3 =",cube)
