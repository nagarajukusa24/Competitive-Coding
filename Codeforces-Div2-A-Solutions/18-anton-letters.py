s = str(input())
c = 0
t =set()
for i in range(len(s)):
	if(ord(s[i])>=97 and ord(s[i])<=122):
		t.add(s[i])
print(len(t))