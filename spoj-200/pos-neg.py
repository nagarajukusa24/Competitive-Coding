t = int(input())
while(t):
	n = int(input())
	if(n>0):
		print("{} is positive number".format(n))
	elif(n<0):
		print("{} is negative number".format(n))
	else:
		print("n is zero")
	t-=1