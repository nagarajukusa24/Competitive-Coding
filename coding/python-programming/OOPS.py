class MyClasS:
    def __init__(self,a,b):
        self.x = a
        self.y = b
    def first(self,k,l):
        self.k = k
        self.l = l
        
d = MyClasS(3,4)
print(d.x)
print(d.y)
d.first(5,6)
print(d.k)
print(d.l)