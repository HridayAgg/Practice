summ = 0
product = 1
count = 0
user = input("Do you want sum product or average s, p, a or anything else to break\n")
if user.lower() == "s":
    while input(f"Enter q to quit or press Enter to write your {count+1} number:") != 'q':
        summ = summ+int(input())
        count= count + 1
    print(summ)
elif user.lower() == "p":
    while input(f"Enter q to quit or press Enter to write your {count+1} number:") != 'q':
        product = product*int(input())
        count=count+1
    print(product)
elif user.lower() == "a":
    while input(f"Enter q to quit or press Enter to write your {count+1} number:") != 'q':
        summ = summ+int(input())
        count=count+1
    print(summ/count)
else:
	quit()
