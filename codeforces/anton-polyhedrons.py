#n = int(input())
dict = {#'T':4,'C':6,'O':8,'D':12,'I':20
	'Tetrahedron': 4,
	'Cube': 6,
	'Octahedron': 8,
	'Dodecahedron': 12,
	'Icosahedron': 20
}
sum = 0
for _ in range(int(input())):
	#str = str(input())
	#if str[0] in dict
	sum = sum + dict[input()]
	# del str
print(sum)