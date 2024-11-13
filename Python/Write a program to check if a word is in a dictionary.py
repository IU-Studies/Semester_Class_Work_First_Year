dictionary = {"IU": 12, "Ghost": 232, "Magic": 2324}
word = input("Enter a word to check: ")

for i in dictionary:
    if word == i:
        print("Found")
        break
else:
    print("Not found")
