listOfNumbers = input("Enter the numbers you which to get the sum of, separated by white space: ")

listOfNumbers = listOfNumbers.split()

total = sum(int(i) for i in listOfNumbers)

print("The sum of the numbers you entered was: " + str(total))