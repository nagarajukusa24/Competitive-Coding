t = int(input())
while(t):
	n = int(input(''))
	sum = 0
	while (n>0):
		rem = n%10
		n = n//10
		sum+= rem
	print(sum)
	t-=1