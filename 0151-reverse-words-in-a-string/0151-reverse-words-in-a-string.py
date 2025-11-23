class Solution:
    def reverseWords(self, s: str) -> str:
        a=s.split()
        n=len(a)
        b=""
        for i in range(n//2):
            temp=a[i]
            a[i]=a[n-i-1]
            a[n-i-1]=temp
        s=" ".join(a)
        return s
        