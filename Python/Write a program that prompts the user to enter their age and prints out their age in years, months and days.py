# Write a program that prompts the user to enter their age and prints out their age in years, months and days.

user = int(input("Enter your age in years:-"))
months = user*12
days = user*12*365
print(''' Your age in Years is''',user,"\n"
''' Your age in Months is''',months,"\n"
''' Your age in Days is''',days)
