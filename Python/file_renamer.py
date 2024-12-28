import os 
oldname="doc.txt"
newname='renamed_by_python.txt'
with open('doc.txt') as f:
    content = f.read()
with open('renamed_by_python.txt','w') as f:
    f.write(content)
os.remove(oldname)