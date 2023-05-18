# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.

count = 0
divide_count = 0
while count < 10:
    for i in range(1000,1,-1):
        for j in range(1,i+1):
            if i%j == 0:
                divide_count += 1
        if divide_count == 2:
            print(i)
            count += 1
            divide_count = 0