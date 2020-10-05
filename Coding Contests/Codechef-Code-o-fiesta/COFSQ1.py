# cook your dish here
s = str(input())
o = []
li = list(s.split(" "))
v = ['a','e','i','o','u']
for i in range(len(li)):
    str = li[i]
    if str[0] in v:
        str = str+"d"+"u"*(i+1)
        o.append(str)
    else:
        str = str[1:] + str[0] + "d" + "u"*(i+1)
        #str.replace(str[0],'')
        o.append(str)
for i in range(len(o)):
    print(o[i],end=" ")