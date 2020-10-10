# GregPikitis 10/9/20
# Check if two strings are anagrams

# Inputting strings
rawstring1 = raw_input("Enter first string: ")
rawstring2 = raw_input("Enter second string: ")

# Stripping spaces and case sensitivity
string1 = rawstring1.replace(" ", "").lower()
string2 = rawstring2.replace(" ", "").lower()

# Getting unique letters
set1 = set(string1)

# Setting an anagram indicator
anagrams = 1

if len(string1) == len(string2):
        for x in set1:
            if string1.count(x) != string2.count(x):
                # Checking if strings have the same number of each letter
                anagrams = 0
else: # If not the same length, not anagrams
    anagrams = 0

# Printing results based on anagram indicator
if anagrams == 1:
    print(rawstring1 + " and " + rawstring2 + " are anagrams!")
else:
    print(rawstring1 + " and " + rawstring2 + " are not anagrams!")
