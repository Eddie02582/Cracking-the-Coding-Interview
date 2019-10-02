# 1.6 String Rotation . .

## Question
Assume you have a method is Substring which checks if one word is a substring </br>
of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one </br>
call to isSubstring (e.g., "waterbottle" is a rotation of "erbottlewat" ).</br>
## Solution

Sol 1:
``` java 
    String compress(String str)
    {
        String compressedString = "";
        int count = 0 ;
        for (int i =0; i<str.length();i++)
        {
            count += 1;
            if (i + 1 >=str.length()  || str.charAt(i) != str.charAt(i+1)){
                compressedString += ""+ str.charAt(i) + count;
                count = 0;
            }

        }

        return str.length() <= compressedString.length() ? str:compressedString;
    }
```

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



