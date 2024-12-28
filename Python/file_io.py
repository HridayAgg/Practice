'''
# Read
f=open("sample.txt",'rt')
data=f.read(5)
print(data)
f.close()

# Write
f = open('another.txt','w')
d = f.write("Pls  write this to the file")
f.close()
f = open('another.txt','w')
d = f.write("Pls Don't write this to the file")
f.close()
'''
# Append
f =open('another.txt','a')
f.write('HEHE')
f.close()