user = eval(input("Enter a list: "))
check = eval(input("Enter an element to check if it is in the list or not: "))

for i in user:
    if check == i:
        print("Found")
        break
else:
    print("Not Found")
