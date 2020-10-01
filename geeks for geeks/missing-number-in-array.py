# Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.
#code
for _ in range(int(input())):
    n = int(input())
    li1 = list(map(int,input().split()))
    k = sum(li1)
    k1 = n*(n+1)//2
    print(k1-k)