
# N
def One_Away(s1,s2):    
    if len(s1) == len(s2):
        return oneEditReplace(s1,s2)
    elif len(s1) == len(s2) + 1  :
        return oneEditlnsert(s1,s2)
    elif len(s2) == len(s1) + 1  :
        return oneEditlnsert(s2,s1)   
    
    return False
    
def oneEditReplace(s1,s2):
    foundDifference = False
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            if foundDifference:
                return False
            foundDifference = True

    return True
    
def oneEditlnsert(s1,s2):
    index1,index2 = 0,0
    while index1 < len(s1) and index2 < len(s2):
        if s1[index1] != s2[index1]:
            if index1 != index2:
               return False
            index2 += 1
        else:
            index1 += 1
            index2 += 1
    return True   
    
def oneEditAway(s1,s2):
    if abs(len(s1) - len(s2)) > 1:
        return False
    s1 =  s2 if len(s1) < len(s2)  else s1
    s2 =  s1 if len(s1) < len(s2)  else s2
    index1,index2 = 0,0
    foundDifference = False
    while index2 < len(s2) and index < len(s1):
        if s1[index1] != s2[index2]:
            if foundDifference:
                return False
            foundDifference = True
            if len(s1) == len(s2):
                index1 += 1
        else:
            index1 += 1
        index2 +=1
    return True
            
    
    
    
assert One_Away("pale","ple") == True

assert One_Away("pales","pale") == True

assert One_Away("pale","bale") == True

assert One_Away("pale","bae") == False



