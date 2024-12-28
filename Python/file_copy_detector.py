with open('this.txt') as f:
    content = f.read()
with open('copy.txt') as f:
    content2 = f.read()
if content==content2:
    print("Copy detected")
else:
    print("Not copied")