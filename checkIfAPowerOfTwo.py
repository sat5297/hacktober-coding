def isPowerOfTwo(n: int):
        return n>0 and  (n & n-1 == 0)

#Testing to check if the value passes or not
print(isPowerOfTwo(2)) 
#Returns True


