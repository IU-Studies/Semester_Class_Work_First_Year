# Write a program that prints the string "The Fibonacci sequence is 0,1,1,2,3,5,8,13,21,34,..." in a new line and then prints the first 10 number in the Fibonacci sequence.

print("The Fibonacci sequence is 0,1,1,2,3,5,8,13,21,34,...")
num0 = 10
num1 = 0
num2 = 1
print("Fibonacci Series:", num1, num2, end=" ")
for i in range(2, num0):
  num3 = num1+num2
  num1 = num2
  num2 = num3
  print(num3, end=" ")
