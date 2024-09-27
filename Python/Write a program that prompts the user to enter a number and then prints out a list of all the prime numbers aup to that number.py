# Write a program that prompts the user to enter a number and then prints out a list of all the prime numbers up to that number.

user = int(input("Enter a number to get list of Prime and Non Prime numbers:-"))
for a in range(2,user+1):
  prime = True
  for i in range (2,a):
    prime=True
    if(a%i==0):
      prime=False
      break
  if(prime==True):
    print(a,"is Prime")
  else:
    print(a,"is Not Prime")
