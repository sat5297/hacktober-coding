### Binary Search
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
low = 0
high = n-1
mid = n//2
while(low<high):
  if a[mid] == ele:
    print("Element found at index",mid+1)
    flag = 1
    break
  elif a[mid] > ele:
    high = mid - 1
  else:
    low = mid + 1
if flag == 0:
  print("Element not found in the list.")
