class Solution:
    def dectobin(self, d: int) -> int:
        if d==0:
            return 0
        return d%2+10*(self.dectobin(d//2)) 
    def addBinary(self, a: str, b: str) -> str:
        c= int(a,2)
        d=int(b,2)
        e=c+d
        f=self.dectobin(e)
        g=str(f)
        return g
        
        