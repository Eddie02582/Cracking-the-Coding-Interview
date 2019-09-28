
# N
def One_Away(s):
	odd = 0 
	count = {}
	for c in s:
		if c != " ":
			c = c.lower()
			count[c] = count.setdefault(c,0) +1	
	for key in count.keys():
		if count[key] % 2 == 1:
			odd +=1
	return odd <=1

	

	
	
	
	
assert Palindrome_Permutation_dict("Tact Coa") == True

assert Palindrome_Permutation_array("Tact Coa") == True

