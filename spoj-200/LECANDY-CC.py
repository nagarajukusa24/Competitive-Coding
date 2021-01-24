# cook your dish here
t = int(input())
for i in range(t):
	n,c = [int(x) for x in input().split()]
	#n,c = input().split also works
	#n,c = map(int,input().split())
	list = []
	count = 0
	for k in range(n):
		l = int(input())
		c = c-l

	if(c<0):
		print("No")
	else:
		print("Yes")