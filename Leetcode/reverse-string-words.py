# s = "naga raju kusa"
s = "nagendra"
li1 = [nagendra]
li = s.split(' ')
for i in range(len(li)):
    str = li[i]
    str = str[::-1]
    li1.append(str)
print(li)
print(li1)
for i in range(len(li1)):
    print(li1[i], end=' ')