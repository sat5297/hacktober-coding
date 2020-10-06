#To reverse any inputted number using python
number=int(input("Enter the number:\n"))
reverse=0
while(number>0):
    digit=number%10
    reverse=reverse*10+digit
    number=number//10
print("The number when reversed is:",reverse)