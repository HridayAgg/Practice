num = 0

main_num = 1
while main_num<=20:
    main_num +=1
    while num<=10:
        num=num+1
        with open(f"table_of_{main_num}.txt",'a') as f:
            product = main_num*num
            f.write(f"{main_num}x{num}={product}")
            

