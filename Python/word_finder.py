content = True
i=1
with open('log.txt') as f:
    
    while content:
        content = f.readline()

        if 'python' in content.lower():
            print(f"python is in line {i}")
            print(content)
        i+=1