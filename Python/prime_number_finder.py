n=int(input("ENTER A NUMBER:"))
prime=False
for i in range(2,n):
	if n%i==0:
		prime=False
		break
	else:
		prime=True
		break
if prime==True:
	print("Prime number")
elif prime==False:
	print("Not a prime number")