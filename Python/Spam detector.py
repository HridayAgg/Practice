print("Welcome to the spam detector")
com=input("Enter the comment\n")
spam=False
if 'make a lot of money' in com:
	spam=True
elif 'buy now'in com:
	spam=True
elif 'subscribe this'in com:
	spam=True
elif 'click this' in com:
	spam=True
if spam==True:
	print("Caution this is spam")
else:
	print("This is safe")
