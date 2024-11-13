setuser = set(map(int, input("Enter a set of numbers separated by spaces: ").split()))
user = int(input("Enter a number to check: "))

if user in setuser:
    print("Found")
else:
    print("Not Found")
