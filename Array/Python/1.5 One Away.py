
# N
def One_Away(s1,s2):
    dict = {}
    if len(s1) == len(s2):
        for i in range(len(s1)):
            if s1[i] != s2[i]:
                if s1[i] in dict:
                    dict[s1[i]] != s2[i]
                    return False
                elif len(dict) == 1:
                    return False
                else:
                    dict[s1[i]] = s2[i]
    else:
        i = 0 
        j = 0
        disable_char = ""
        while j < len(s2):
            if s1[i] != s2[j]:                
                if disable_char == "":
                    disable_char = s1[i]
                elif disable_char != s1[i]:
                    return False    
                i += 1              
            else:
                i += 1
                j += 1
        # if  j != len(s2) :    
        #     return False
     
    return True
    
assert One_Away("paleaea","plee") == True	    
    
assert One_Away("palea","ple") == True	    
	
assert One_Away("palea","peb") == False	
	
assert One_Away("pale","ple") == True

assert One_Away("pale","pale") == True

assert One_Away("pale","bale") == True

assert One_Away("pale","bake") == False



