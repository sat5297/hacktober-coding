def isPowerOfTwo(n: int):
        return n>0 and  (n & n-1 == 0)
