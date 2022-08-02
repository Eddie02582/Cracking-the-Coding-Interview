# 1.6 String Compression . .

## Question
Implement a method to perform basic string compression using the counts </br>
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the </br>
"compressed" string would not become smaller than the original string, your method should return </br>
the original string. You can assume the string has only uppercase and lowercase letters (a - z). </br>
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



