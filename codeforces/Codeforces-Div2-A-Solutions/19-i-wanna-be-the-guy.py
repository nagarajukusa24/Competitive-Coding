n = int(input())
xl = list(map(int, input().split()))
yl = list(map(int, input().split()))
t = set()
for i in range(1,len(xl)):
	t.add(xl[i])
for i in range(1,len(yl)):
	t.add(yl[i])
if(len(t)==n):
	print("I become the guy.")
else:
	print("Oh, my keyboard!")