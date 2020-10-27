### Reverse a number
# Code by Vinod(https://github.com/vkgupta857)

n = int(input("Enter a number: "))
# n = 1234
result = 0
temp = 0
while(n>0):
    temp = n % 10
    result = result*10 + temp
    n = n // 10
print("Reverse of the number is:", result)
