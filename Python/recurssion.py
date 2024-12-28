'''
# Program 1
def factorial(n):
	product = 1
	for i in range(1,n+1):
		product = product * i
	return product
num = int(input("Enter your number:"))
print(factorial(num))
# Program 2
print (f)
def hw():
	return "Hello world"

print(hw())

# Program 3
def factorial_recursive(n):
	if n==1 or n==0:
		return 1
	return factorial_recursive(n-1) * n
print(factorial_recursive(5))
'''
# Product 4
def summ(num):
	if num==1:
		return 1
	return num + summ(num-1)
print(summ(3))