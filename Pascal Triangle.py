class Solution:
    def generate(self, A: int):
        
        pt=[]
        if(A==0):
            return pt
        d=1
        k=[]
        k.append(1)
        pt.append(k)
        for i in range(1,A):
            k=[]
            k.append(1)
            
            for j in range(1,d):
                c=pt[i-1][j]+pt[i-1][j-1]
                k.append(c)
            d+=1
            k.append(1)
            pt.append(k)
        return pt
        