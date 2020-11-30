t = int(input())
while(t):
	a,b = [int(x) for x in input().split()]
	if(a>b):
		print("{} is greater than {}".format(a,b))
	elif(b>a):
		print("{} is smaller than {}".format(a,b))
	else:
		print("n is equal m: {}".format(a))