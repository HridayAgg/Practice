post=input("Enter the post\n")
post=post.upper()

if "HRIDAY" in post:
	abt_h=True
else:
	abt_h=False

if abt_h==True:
	print("Yes he is talking about Hriday")
elif abt_h==False:
	print("No,he doesn't care about you")