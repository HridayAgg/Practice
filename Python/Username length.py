user=input("Enter your username:")
if len(user)>10:
	exceed=True
else:
	exceed=False
if (exceed):
	print("It is too long")
else:
	print("It is not more than 10 characters")