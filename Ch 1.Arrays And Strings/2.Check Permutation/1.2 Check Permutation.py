#Nlog(N)
def Check_Permutation(s1,s2):
    if len(s1) != len(s2):
        return False
    return sorted(list(s1)) == sorted(list(s2))

#N
def Check_Permutation_dcit(s,t):
    if len(s) != len(t):
        return False
    count = {}
    
    for i in s:
        count[s] = count.setdefault(s,0) + 1
        
    for c in t:
        count[c] = count.setdefault(c,0) - 1
        if count[c] < 0:
            return False
    
    return True
    
