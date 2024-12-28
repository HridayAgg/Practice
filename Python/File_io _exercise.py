f = open("poems.txt")
poem =f.read()
if 'twinkle' in poem:
    print("TWINKLE is there")
else:
    print("Twinkle nottt")
f.close()