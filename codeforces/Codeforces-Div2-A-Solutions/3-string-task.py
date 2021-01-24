def solve():
	s = str(input())
	s.lower()
	s1 = ""
	# str = ""
	v = ['a','o','y','e','u','i']
	for i in range(len(s)):
		if s[i].lower() not in v:
			# s.replace(s[i],'')
		# else:
			# s.replace(s[i],"."+s[i])
			s1 = s1 + '.'
			s1 = s1 + s[i]
	# for i in range(len(s)):
		
	print(s1.lower())

if __name__ == "__main__":
	solve()