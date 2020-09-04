(n,k) = map(int,input().split())
list1 = [0]*n
for i in range(k):
    str = input()
    strli = list(str.split(' '))
    if(strli[0]=='CLOSEALL'):
        list1 = [0]*n
        print(0)
    else:
        k = int(strli[1])
        if(list1[k-1]==0):
            list1[k-1]=1
        elif(list1[k-1]==1):
            list1[k-1]=0
        print(list1.count(1))