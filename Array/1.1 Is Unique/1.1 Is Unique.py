#log(N*N)
def is_unique(s):
    s = sorted(s)
    for i in range(len(s)):
        for j in range(i + 1,len(s))
            if s[i] == s[j]
                return False
    return True

#O(Nlog +N)
def is_unique_sort(s):
    s = sorted(s)
    for i in range(1,len(s)):
        if s[i] == s[i-1]:
            return False
    return True

#O(N)		
def is_unique_set(s):	
    return len(set(s)) == len(s)


#O(N)	
def is_unique_dict(s):
    count = {}
    for c in s:
        count[c] = count.setdefault(c,0) + 1
        if count[c] >1:
            return False	
    return True
			
	
	
s = 'correct'	
	
assert 	is_unique_sort('coret') == True 

assert 	is_unique_set('correct') == False 

assert  is_unique_dict('correct') == False 