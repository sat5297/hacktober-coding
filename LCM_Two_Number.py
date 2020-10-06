def LCM_hack(x,y):
    if(x>y):
        min_lcm = x
    else:
        min_lcm = y
    while(1):
        if((min_lcm % x == 0) and (min_lcm % y == 0)):
            lcm = min_lcm
            break
        min_lcm = min_lcm + 1
    return lcm

input_1 = int(input("Enter the first number : "))
input_2 = int(input("Enter the second number : "))
print("LCM of ", input_1,"and ", input_2, "is : ", LCM_hack(input_1,input_2))
