###
# Program to find the reverse of words in a string
###

# START

# Take input line
line = input("Enter a string: ")

# Split the words into a list
words_list = line.split()

# Reverse the words
reversed_words_list = words_list[::-1]

# print after joining the words with " "(space)
print("Line after reversing words : ", " ".join(reversed_words_list))

# END