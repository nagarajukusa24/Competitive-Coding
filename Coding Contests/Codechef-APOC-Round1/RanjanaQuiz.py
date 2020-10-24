import numpy as np
n = int(input())
# li = []
li = []
for _ in range(n):

	li1 = list(map(int, input().split()))
	li1.sort()
	if li1 in li:
		li.remove(li1)
	else:
		li.append(li1)
print(len(li))