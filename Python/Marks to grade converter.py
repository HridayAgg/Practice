m=int(input("Enter your marks: "))
if m>=90 and m<100:
	print("Your grade is Ex")
elif m>=80 :
	print("Your grade is A")
elif m>=70 :
	print("Your grade is B")
elif m>=60:
	print("Your grade is C")
elif m>=50:
	print("Your grade is D")
elif m<50:
	print("Your grade is F")
else:
	print("Enter valid marks")
