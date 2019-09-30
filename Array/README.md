# Chapter 1 I Arrays and Strings . .


## 1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?

Sol 1:假設256個字符(若不含ASCII延伸字元,可以縮小成128)，建立一個布林值的陣列判斷是否字元出現

``` java
    boolean IsUniqueChars(String str)
    {
        if (str.length()>128)
            return false;
        boolean []char_set = new boolean[128];
        
        for (int i = 0; i < str.length(); i++)
        {
            int val = str.charAt(i);
            if (char_set[val])
                return false;
        }
        return true;
    }

```

Sol 1:假設256個字符(若不含ASCII延伸字元,可以縮小成128)，建立一個布林值的陣列判斷是否字元出現