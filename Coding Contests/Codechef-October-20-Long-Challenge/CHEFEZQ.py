t = int(input())
for _ in range(t):
    s = 0
    n,k = map(int,input().split())
    li = list(map(int, input().split(' ')))
    s = sum(li)
    s = s//k
    print(int(s+1))