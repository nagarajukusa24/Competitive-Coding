# cook your dish here
t = int(input())
for i in range(t):
    n,k = [int(x) for x in input().split()]
    list1 = []
    for l in range(n):
        str = input()
        list1.append(str)
    for a in range(k):
        m = int(input())
        list2 = []
        for j in range(m):
            str = input()
            list2.append(str)
    for p in range(n):
        if(list1[0] in list2):
            print("YES")
        else:
            print("NO")