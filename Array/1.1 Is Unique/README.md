# 1.1 Is Unique . .

## Question
Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?


## Solution

Sol 1:假設256個字符(若不含ASCII延伸字元,可以縮小成128)，建立一個布林值的陣列判斷是否字元出現</br>
Time:O(N)
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

Sol 2:若不使用額外空間,雙重迴圈檢查</br>
Time:O(N*N)

``` java
    public boolean IsUnique_non_space(String str)
    {  
        for (int i = 0; i < str.length(); i++)
        {  
            for (int j = i + 1; i < str.length(); j++)
            if (str.charAt(i) == str.charAt(j))
            {
                return false;
            }

        }
        return true;
    }
```    

Sol 3:先排序,再檢查前後字元是否相同</br>
Time:O(NlogN) 
``` java
    public boolean IsUniqueChars_Sort(String str)
    {        
        char[] charArray = str.toCharArray();
        Arrays.sort(charArray);
        for (int i = 1; i < charArray.length(); i++)
        {           
            if (charArray[i] == charArray[i-1])
            {
                return false;
            }

        }
        return true;
    }
```   
Sol 4:利用set,如果字元沒重複那麼set(arr)的長度會等於arr的長度

``` java
    public boolean IsUnique_Set(char[] arr)
    {        
        HashSet<Character> set=new HashSet<Character>();   
        for (int i = 0; i < arr.length; i++)
        {     
            set.add(arr[i]);  
        }        
        return set.size() == arr.length;
    } 

```

Sol 4:利用字典紀錄出現次數,最後判斷是否有次數大於1

``` python
def is_unique_dict(s):
    count = {}
    for c in s:
        count[c] = count.setdefault(c,0) + 1
        if count[c] >1:
            return False	
    return True

```
