dictionary = {}
for i in range(2):
    word = input("Enter name: ")
    meaning = int(input("Enter roll: "))
    dictionary[word] = meaning
print(dictionary)

delword = input("Enter a name to delete its roll: ")
if delword in dictionary:
    del dictionary[delword]
    print("Updated dictionary:", dictionary)
else:
    print("The name you entered is not in the dictionary.")
