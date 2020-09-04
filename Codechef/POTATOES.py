t = int(input())
for i in range(t):
    f1,f2 = map(int,input().split())
    f = f1+f2
    k = f
    while(True):
        c = 0
        f = f+1
        for j in range(1,f+1):
            if(f%j==0):
                c+=1
        if(c==2):
            break
    print(f-k)