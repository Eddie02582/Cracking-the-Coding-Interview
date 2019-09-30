# 1.2 Check Permutation . .

## Question
Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.


## Solution

Sol 1: 如果兩字串字元個數一樣，即為重組</br>
Time:O(N)
``` java
    boolean permutation(String s , String t)
    {
        if (s.length() != t.length())
            return false;
        
        int [] count = new int [256];
        for (int i = 0 ;i < s.length();i++){
            int val = s.charAt(i);           
            count[val] += 1;  
        }
        for (int i = 0 ;i < t.length();i++){
            int val = t.charAt(i); 
            count[val] -= 1;
            if (count[val] < 0)
                return false;
        }
        return true;
    }

```

Sol 2:利用字典
Time:O(N)

``` python
    def Check_Permutation_dcit(s,t):
        if len(s) != len(t):
            return False
        count = {}
        
        for i in s:
            count[s] = count.setdefault(s,0) + 1
            
        for c in t:
            count[c] = count.setdefault(c,0) - 1
            if count[c] < 0:
                return False
        
        return True
```    

Sol 3:排序,檢查陣列是否一樣</br>
Time:O(NlogN) 
``` java
    boolean permutation_sort(String s , String t)
    {
        if (s.length() != t.length())
            return false;
        char []char_s = s.toCharArray();
        char []char_t = t.toCharArray() ;
        Arrays.sort(char_s);
        Arrays.sort(char_t);
        return char_s == char_t;
    }
```   
