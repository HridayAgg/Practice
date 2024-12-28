t=int(input("Enter total marks: "))
m1=int(input("Enter marks of subject 1: "))
m2=int(input("Enter marks of subject 2: "))
m3=int(input("Enter marks of subject 3: "))

if m1>=33/100 * t and m2>=33/100 * t and m3>=33/100 * t:
	if (m1+m2+m3)>=40/100 * t * 3:
				print("PASS")
else:
	print("FAIL")
