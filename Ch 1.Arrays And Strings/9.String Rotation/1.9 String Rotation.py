#O(N)
def isRotation_slice(s1,s2):
    if len(s1) != len(s2):
        return False    
   
    for i in range(len(s2)):       
        if s2[i:] + s2[:i] == s1:           
            return True
    return False
#O(N)
'''
 if s1 = xy = waterbottle
 x = wat
 y = erbottle
 
 s2 = yx
 
 s1 + s1 = xyxy
 
 only adjust s2 in s1+s1
 
'''
def isRotation(s1,s2):
    if len(s1) == len(s2):
        return s2 in (s1+s1)  
    return False



assert isRotation("waterbottle","erbottlewat") == True
assert isRotation_slice("represented","resentedrep") == True
assert isRotation_slice("represented","sentedrepre") == True
            