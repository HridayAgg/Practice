# Program 1
for i in range(100):
	if i == 50:
		break
	else:
		print(i)
# Program 2
for i in range(100):
	if i%3==0 or i%5==0:
		print(i)
# Program 3
user=(int(input("ENTER A NUMBER:")))
for i in range(1,(user+1)):
	print(i)
	if i == 50:
		break 
else:
	print("OK")

# Program 4
count=0
b=(1,2,3,4,5,6,7,8)
for n in b:
	print(n)
	count = count + n
	if count==10:
		print(count)
		break
