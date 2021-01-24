s = str(input())
l1 = 0; l2=0; l3=0
for i in range(len(s)):
	if(s[i]=='1'):
		l1+=1
	elif(s[i]=='2'):
		l2+=1
	elif(s[i]=='3'):
		l3+=1
s1 = "1+" * l1 + "2+" * l2 + "3+" * l3
print(s1[:-1])
