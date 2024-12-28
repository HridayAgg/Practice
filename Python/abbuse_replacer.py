with open("doc.txt") as f:
    content = f.read()
content = content.replace("donkey", "******")
with open("doc.txt",'w') as f:
    f.write(content)