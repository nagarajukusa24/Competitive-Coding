# cook your dish here
t = int(input())
for i in range(t):
    sum = 0
    n = int(input())
    h = 1
    while((h*(h+1))//2<=n):
        h+=1
    print(h-1)
    