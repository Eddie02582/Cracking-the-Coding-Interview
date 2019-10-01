# 1.4 Palindrome Permutation . .

## Question
Given a string, write a function to check if it is a permutation of a palindrome. </br>
A palindrome is a word or phrase that is the same forwards and backwards. A permutation </br>
is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words. </br>

EXAMPLE </br>
Input: Tact Coa </br>
Output: True (permutations: "taco cat". "atco cta". etc.) </br>


## Solution

Sol 1: 假設輸入皆為英文字母，如果是回文，表示最多只有1個字母個數是奇數

``` java
    boolean isPermutationOfPalindrom_dict(String phrase)
    {
        phrase = phrase.toLowerCase();      
       
        HashMap <Character,Integer>counts = new HashMap<Character,Integer>();

       for ( int i = 0; i < phrase.length();i++)
       {
            char c = phrase.charAt(i);
            if (Character.isLetter(c))
            {
                if (!counts.containsKey(c))
                {
                    counts.put(c, 1);  
                }
                else{
                    int count = counts.get(c); 
                    counts.put(c, count + 1); 

                }

            }
       }             
       int odd_count = 0;
       for (Character key : counts.keySet()) {
            int count = counts.get(key);
            if (count %2 != 0)
                odd_count += 1;
        }

       return odd_count <= 1;
    } 
```

Sol 2:利用陣列
Time:O(N)

``` python
def Palindrome_Permutation_array(s):
    array = []
    s = s.lower()
    for c in s:
        if c.isalpha(): 
            if c not in array:
                array.append(c)
            else:
                array.remove(c)
    return len(array) <=1
```    

