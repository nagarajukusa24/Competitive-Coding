li = [1,2,3,4,5]
n = int(input())
c = 0
while (True):
	if n in li:
		c+=1
		print(c)
		break
	else:
		n-=5
		c+=1