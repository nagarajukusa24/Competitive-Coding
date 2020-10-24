n = int(input())
for _ in range(n):
	k = int(input())
	c = 0
	while(True):
		k-=1
		l = len(str(k))
		for i in range(l-1):
			if(k[i]<k[i+1]):
				c+=1
		if(c==l):
			print(k)
			break