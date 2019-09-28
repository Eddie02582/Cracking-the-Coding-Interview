def URLify_replace(s):
	s = s.strip()
	s = s.replace(" ","%20")
	return s

def URLify(s,length):
	array = list(s)
	i = 0
	while i < len(s):		
		if array[i] == ' ':
			length += 2
			count = length - 1							
			while count >= i + 3:
				array[count] = array[count - 2]
				count = count - 1		
			array[i]= "%"
			array[i + 1]= "2"
			array[i + 2]= "0"						
			i += 3
		else:
			i += 1

	return "".join(array)
				
				
	
	
	
	
assert URLify_replace("Mr John Smith    ") == "Mr%20John%20Smith"

assert URLify("Mr John Smith    ",13) == "Mr%20John%20Smith"