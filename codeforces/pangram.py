n = int(input())
str = str(input())
r = set()
str.lower()
str.upper()
print(str)
li = []
# for i in range(n):
# 	if(ord(str[i])>=65 and ord(str[i])<=90):
# 		str[i] = str[i]+32
for i in range(n):
	# if((ord(str[i])>=65 and ord(str[i])<=90) or (ord(str[i])>=97 and ord(str[i])<=122)):
		
	# r.add(ord(str[i]))
	if ord(str[i]) not in li:
		li.append(ord(str[i]))
print(li)
print(len(li))
if(len(li)==26):
	print("YES")
else:
	print("NO")