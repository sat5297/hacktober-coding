'''This is a program to sort the elements 
of a 0, 1, 2  without using any sorting algorithm
'''

'''This algrithm divides an array into 4 parts:
   first part contains 0, second part contains 1,
   third part contains unknown elements and the
   fourth part contains 2
   First part -> 0 to l     ... contains 0s
   Second part -> l to mid  ... contains 1s
   Third part -> mid to h   ... contains unknown elements
   Fourth part -> h to size ... contains 2s 
 '''
def sortarr(a, size):
	l = 0
	h = size-1
	mid = 0
	while mid<=h:
		if a[mid] == 0:
			 a[l], a[mid] = a[mid], a[l]
			 l = l+1
			 mid = mid +1
		elif a[mid] == 1:
			mid = mid + 1
		else:
			a[mid], a[h] = a[h], a[mid]
			h = h-1
	return a

print("This is a program to sort a 012 array")
print("Enter the elements of the array: ")
arr = list(map(int, input().split()))
arr = sortarr(arr, len(arr))
print("Array after sorting or segregation: ")
print(*arr)