#GCD calculation of any two inputted numbers
def Greatest_Common_Divisor(a,b):
    print("For numbers",a,"and",b)
    while b!=0:
        #swapping using another variable
        temp=b
        b=a%b
        a=temp
    gcd=a
    print("GCD is:",gcd)
print("Enter the numbers: \n")
num1=int(input())
num2=int(input())
Greatest_Common_Divisor(num1,num2)        