a,b = [int(x) for x in input().split()]
sum=0
for i in range(a,b+1):
	sum+=i*i
	#print(sum)
print(sum)