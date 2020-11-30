n = int(input())
for i in range(0,n):
	sum = 0
	k = int(input())
	for j in range(k//2):
		if(k%j==0):
			sum+=j
	print(sum)