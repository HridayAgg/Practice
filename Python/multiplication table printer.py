n=int(input("Enter a number for it's multiplication table:"))
print(f"-x-x-  MULTIPLICATION TABLE OF {n}  -x-x-x-\n")
for count in range(1,11):
	product=n*count
	print(f"{n} x {count} = {product}")