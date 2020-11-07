# cook your dish here
(n1, n2, n3) = [int(x) for x in input().split()]
li1 = []
li2 = []
li3 = []
for i in range(n1):
    k = int(input())
    li1.append(k)
for i in range(n2):
    k = int(input())
    li1.append(k)
for i in range(n3):
    k = int(input())
    li1.append(k)

for i in range(len(li1)):
    if li1[i] in li2 or li1[i] in li3:
        print(li1[i])