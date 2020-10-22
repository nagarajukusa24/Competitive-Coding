for _ in range(int(input())):
	str = input()	
	k = len(str)
	z = str.count('0')
	o = str.count('1')
	if(z>0 and o>0):
		if(z==1 or o==1):
			print("YES")
	else:
		print("NO")