a,b = 1,0
counter = 1
print(a,b)
while counter < 36:
    print(counter, " Fibonacci iterator : " , a,b)
    a,b ,counter= a+b , a, counter+1 