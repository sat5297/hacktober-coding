# Sorts array a[0..n-1] using Bogo sort
# Favorable for good RNG/luck :)

def bogoSort(a): 
    n = len(a) 
    while (is_sorted(a)== False): 
        shuffle(a) 
  
# To check if array is sorted or not 
def is_sorted(a): 
    n = len(a) 
    for i in range(0, n-1): 
        if (a[i] > a[i+1] ): 
            return False
    return True
  
def shuffle(a): 
    n = len(a) 
    for i in range (0,n): 
        r = random.randint(0,n-1) 
        a[i], a[r] = a[r], a[i] 