t = int(input())
while(t):
	list1 = []
	a,b = [int(x) for x in input().split()]
	s = 0
	while(a<=b):
		s=0
		for i in range(1,a+1):
			if(a%i==0):
				s+=1
		if(s==2):
			list1.append(a)
		a+=1
	print(list1)
	for i in range(len(list1)):
		print(list1[i])
	t-=1
	print("")
