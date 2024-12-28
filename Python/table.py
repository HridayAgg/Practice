# num=0
# while num <= 10:
#     num = num + 1
#     product = num * 2 
#     print(f" x {num} = {product}")   
for h in range(2,21):
    print()
    for i in range(1,11):
        with open(f"tables/table_of_{h}.txt",'a') as f:
            f.write(f"{h} x {i} = {h*i}\n")

        
        