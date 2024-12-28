a=[1,35,40,51]
min=min(a)
max=max(a)
if min<=10:
	if max>=50:
		print("Correct list")
else:
	print("Wrong list")
n=int(input("ENTER A NUMBER: "))
if n<10:
	print("One digit number")
elif n<100 or n==10:
	print("Two digit number")
elif n<1000 or n==100:
	print("Three digit number")
