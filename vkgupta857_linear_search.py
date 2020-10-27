### Linear Search
# Code by Vinod(https://github.com/vkgupta857)

n = int(input("Enter the number of elements in list: "))
a = []
print("Enter elements of the list: ")
temp = 0
for i in range(n):
  temp = int(input())
  a.append(temp)

ele = int(input("Enter element to be searched: "))
flag = 0
for i in range(len(a)):
  if a[i] == ele:
    print("Element found at index",i+1)
    flag = 1
    break
if flag == 0:
  print("Element not found in the list.")
