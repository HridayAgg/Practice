summ = 0
product = 1
count = 0
while input(f"Enter q to quit or press Enter to write your {count+1} number") != 'q':
	summ = summ+int(input())
	count=count+1
print(summ)