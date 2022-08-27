# 1.9 String Rotation . .

## Question(<a href= "https://leetcode.com/problems/rotate-string/">Leetcode 796. Rotate String</a>)
Assume you have a method is Substring which checks if one word is a substring </br>
of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one </br>
call to isSubstring (e.g., "waterbottle" is a rotation of "erbottlewat" ).</br>
## Solution





Sol 1:

``` c++
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return false;
        for(int i = 0;i < s.size();i++){        
            if(goal[i] == s[0] && s == (goal.substr(i) + goal.substr(0,i))){
                return true;           
            }
        }
        return false; 
    }
```




Sol 2:  if s1 = xy = waterbottle, x = wat, y = erbottle,s2 = yx </br>
        s1 + s1 = xyxy ,所以只要判斷 s2 是否在 s1+s1 </br>
 


``` c++ 
bool isRotation( std::string s1, std::string s2 ) {
	size_t len1 = s1.length();
	size_t len2 = s2.length();
	if ( len1 == 0 || len1 != len2 ) {
		return false;
	}
	std::string concatS1 = s1 + s1;
	if ( concatS1.find(s2) != std::string::npos ) {
		return true;
	} else {
		return false;
	}
}
```

``` c++ 
bool isRotation( std::string s1, std::string s2 ) {
    if (s1.size() != s2.size())
        return true;
    s1 += s2;    
    
    for(int i = 0;i < s2.size();i++){
        if(s1.substr(i,s2.size()) == s2){
                return true;           
            }
    }
    return false;
}
```


