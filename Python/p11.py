str=input("Enter a string:")
dig="0123456789"
T=False
for ch in str:
    if ch in dig:
        print("Yes it contains a digit")
        break
    else:
        print("No it doesnt contain digits")
        
