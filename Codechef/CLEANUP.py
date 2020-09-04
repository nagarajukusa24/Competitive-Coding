# your code goes here
t = int(input())
for _ in range(t):
	(n,m) = map(int,input().split())
	m1 = list(map(int,input().split()))
	li1 = [0]*n
	li2 = []
	chef = []
	ass = []
	m1.sort()
	for i in range(len(m1)):
		li1[m1[i]] = 1
	for i in range(1,n+1):
		if(li1[i]==0):
			li2.append(i)
	for i in range(len(li2)):
		if(i%2==0):
			chef.append(i)
		else:
			ass.append(i)
	for i in range(len(chef)):
		print(chef[i],end=" ")
	for i in range(len(ass)):
		print(ass[i],end=" ")