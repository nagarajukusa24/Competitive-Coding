(n,k) = map(int, input().split())
li = []
if(n%2==0):
	for i in range(n//2):
		li.append((2*i)+1)
	k1 = 1
	for i in range(n//2,n):
		li.append(2*k1)
		k1+=1
else:
	for i in range((n//2)+1):
		li.append((2*i)+1)
	k1 = 1
	for i in range((n//2)+1,n):
		li.append(2*k1)
		k1+=1
print(li[k-1])