# Pattern 1

for i in range(4):
	print("*" * i)

# Pattern 2

n=3
for i in range(3):
	print("*" * (n-i))
	if i == 2:
		print("*" * n)
