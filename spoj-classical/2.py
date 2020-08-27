for _ in range(int(input())):
    n,m = map(int,input().split())
    #c = 0
    for i in range(n,m+1):
        c = 0
        for j in range(1,i+1):
            if(i%j==0):
                c+=1
        if(c==2):
            print(j)
    print()