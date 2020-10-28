#Divisibilty test for 11

n=input('Enter the number:')

sum_even=0

sum_odd=0

for i in range(0,len(n)):
    
    if i%2==0:                     #Finding sum of digits in even positions
        sum_even+=int(n[i])
        
    else:
        sum_odd+=int(n[i])         #Finding sum of digits in odd positions
        
if sum_even-sum_odd==0 or (sum_even-sum_odd)%11==0:    #Divisibility check
    print('Divisible by 11')
    
else:
    print('Not divisible by 11')
        
    
