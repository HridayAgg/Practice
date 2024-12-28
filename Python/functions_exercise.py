
# Function to find the max number among 3

def Great(n1,n2,n3):
	return max(n1,n2,n3)
g=Great(1,7,12)
print(g)

# Function to convert Celcius to Fahreniet
c=int(input("Enter the Celcius:"))
def ctof(c):
	return (c * 9/5) + 32 
f=ctof(c)
print(f)

# End line
print("Hriday",end=' ')
print("Pagal",end=' ')
print("Hai",end=' ')

# Function to add all nums till n 
def summ(n):
	if n==1:
		return 0
	return summ(n-1) + n
s=summ(10)
print(s)

# Function to print star pattern
def star(n):
	for i in range(n):
		print ("*" * (n-i))
star(3)

# Function to convert inches to cm
def itoc(i):
	return i * 2.54
cm = itoc(2)
print(cm)

sentence = "I am awesome"
def remove_and_strip(string, word):
	b =  string.replace(word,'')
	return b.strip()
NewStr=remove_and_strip(sentence, "I")
print(NewStr)
# Multiplication table printer
def multiplication_table(num):
	for i in range(1,11):
		print(f"{num} x {i} = {num * i}")

multiplication_table(6)

