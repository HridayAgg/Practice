n1=int(input("Enter the number 1: "))
n2=int(input("Enter the number 2: "))
n3=int(input("Enter the number 3: "))
n4=int(input("Enter the number 4: "))

if n1>=n2 and n1>=n3 and n1>=n4:
	print(f"{n1} is the greatest number")
elif n2>=n3 and n2>=n4 and n2>=n1:
	print(f"{n2} is the greatest number")
elif n3>=n4 and n3>=n2 and n3>=n1:
	print(f"{n3} is the greatest number")
elif n4>=n2 and n2>=n3 and n2>=n1:
	print(f"{n4} is the greatest number")
print("Thanks for using this")
