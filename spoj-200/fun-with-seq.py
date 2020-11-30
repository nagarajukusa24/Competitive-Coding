n = int(input())
res = []
list1 = []
for i in range(n):
	#list1.append(int(input()))
	list1.append([int(x) for x in input().split()])

m = int(input())
list2 = []
for j in range(m):
	list2.append(int(input()))

for i in range(n):
	s = 0
	rem = list1[i]
	for j in range(0,m):
		if(list2[j] != rem):
			s+=1
	if(s == m):
		res.append(rem)
		
print(res)