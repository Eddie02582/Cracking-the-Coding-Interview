
# N
def StringCompression(s):
    temp,reslut = "",""
    count,i = 0,0  
    while i <len(s):
        if i == 0:
           temp = s[i]            
        if temp == s[i]:
            count += 1   
            
        if i ==len(s)- 1 or temp!= s[i]:            
            reslut += "{0}{1}".format(temp,count) 
            temp = s[i]
            count = 1
        i += 1
    print (reslut)
    return s if len(s) <= len(reslut) else reslut
    
assert StringCompression("aabcccccaaa") == "a2b1c5a3"	

assert StringCompression("c") == "c"	 

assert StringCompression("caa") == "caa"   
   
assert StringCompression("caaa") == "caaa"      


