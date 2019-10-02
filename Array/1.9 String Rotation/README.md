# 1.9 String Rotation . .

## Question
Assume you have a method is Substring which checks if one word is a substring </br>
of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one </br>
call to isSubstring (e.g., "waterbottle" is a rotation of "erbottlewat" ).</br>
## Solution

Sol 1:

``` python
def isRotation(s1,s2):
    if len(s1) != len(s2):
        return False    
   
    for i in range(len(s2)):       
        if s2[i:] + s2[:i] == s1:           
            return True
    return False
```
Sol 2:  if s1 = xy = waterbottle, x = wat, y = erbottle,s2 = yx </br>
        s1 + s1 = xyxy ,所以只要判斷 s2 是否在 s1+s1 </br>
 
'''
使用StringBuilder
``` java 
    String compress_stringbuilder(String str)
    {
        StringBuilder sb = new StringBuilder();       
        int count = 0 ;
        for (int i =0; i<str.length();i++)
        {
            count += 1;
            if (i + 1 >=str.length()  || str.charAt(i) != str.charAt(i+1)){
                sb.append(str.charAt(i));
                sb.append(count);      
                count = 0;
            }

        }

        return sb.toString().length() < str.length()  ? sb.toString(): str;
    }
```



