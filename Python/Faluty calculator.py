print("Welcome to the faulty calculator")
num1=int(input("Enter the first Number:"))
op=input("Enter the operator:")
num2=int(input("Enter the second Number:"))

if num1==45 and op=="*" and num2==3:
	print(555)
elif (num1 ==56 and op=="+" and num2==9):
	print(77)
elif num1==56 and op=="/" and num2==6:
	print(4)
else:
	if op=="*":
		print(num1*num2)
	elif op=="-":
		print(num1-num2)
	elif op=="+":
		print(num1+num2)
	elif op=="/":
		print(num1/num2)