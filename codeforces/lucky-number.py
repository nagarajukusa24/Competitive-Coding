li = ['4','7']
s = str(input())
c = 0
for i in range(len(s)):
	if s[i] in li:
		c+=1
if(c==4 or c==7):
	print("YES")
else:
	print("NO")