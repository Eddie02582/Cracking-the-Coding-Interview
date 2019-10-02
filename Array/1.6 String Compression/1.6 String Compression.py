
# N
# def StringCompression(s):
    # temp,reslut = s[0],""
    # count = 0
    # for c in s:
        # if temp == c: 
            # count += 1  
        # else:
            # reslut += "{0}{1}".format(temp,count) 
            # temp = c            
            # count = 1
    # reslut += "{0}{1}".format(temp,count)
    # return s if len(s) <= len(reslut) else reslut

    
def StringCompression(s):
    compressedString = ""
    count = 0
    for i in range(len(s)):
        count += 1
        if i + 1 >= len(s) or s[i] != s[i+1]: 
            compressedString += "{0}{1}".format(s[i],count) 
            count = 0     
    return s if len(s) <= len(compressedString) else compressedString


    

    
assert StringCompression("aabcccccaaa") == "a2b1c5a3"	

assert StringCompression("c") == "c"	 

assert StringCompression("caa") == "caa"   
   
assert StringCompression("caaa") == "caaa"      


