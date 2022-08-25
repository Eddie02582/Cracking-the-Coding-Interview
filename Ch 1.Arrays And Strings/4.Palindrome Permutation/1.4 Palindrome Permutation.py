
# N
def Palindrome_Permutation_dict(s):
    odd = 0 
    count = {}
    s = s.lower()
    for c in s:
        if c.isalpha():            
            count[c] = count.setdefault(c,0) +1	
    for key in count.keys():
        if count[key] % 2 == 1:
            odd +=1
	return odd <=1

def Palindrome_Permutation_array(s):
    array = []
    s = s.lower()
    for c in s:
        if c.isalpha(): 
            if c not in array:
                array.append(c)
            else:
                array.remove(c)
    return len(array) <=1
				

	
	
assert Palindrome_Permutation_dict("Tact Coa") == True

assert Palindrome_Permutation_array("Tact Coa") == True

