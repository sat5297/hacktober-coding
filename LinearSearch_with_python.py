# If you want to implement Linear Search in python  
# Linearly search x in arr[] 
# If x is present then return its location 
# else return -1


def search(arr, x): 
  
    for i in range(len(arr)): 
  
        if arr[i] == x: 
            return i 
  
    return -1
# You can run above code by calling the function and giving arguments
#......search(5,[1,6,8,5,4,2])
#OUTPUT --- it will return the index of the element in the array


#The time complexity of above algorithm is O(n). so basically linear search is not used for doing long and complex search

#HAPPY CODING!!
