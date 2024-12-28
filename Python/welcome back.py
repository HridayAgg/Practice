s = 0 
v = set("aeiouAEIOU")
str = input("Enter a word/line/phrase : ")

for x in str:
    if x in v:
        s = s + 1
    else:
        continue
print(f"The number of vowels are {s}")