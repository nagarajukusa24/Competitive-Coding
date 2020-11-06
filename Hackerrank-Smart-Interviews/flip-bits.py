def dec2bin(a):
    li = []
    while(a>=0):
        k = a%2
        li.append(k)
        a = a//2
    return li
t = int(input())
for _ in range(t):
    (a,b) = map(int, input().split())
    abin = dec2bin(a)
    bbin = list(dec2bin(b))
    c = 0
    for i in range(len(abin)):
        if(abin[i]!=bbin[i]):
            c+=1
    print(c)