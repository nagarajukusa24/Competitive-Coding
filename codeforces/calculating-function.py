n = int(input())
s = 0
for i in range(1,n+1):
	k = pow(-1,i)*i
	s+= k
print(s)