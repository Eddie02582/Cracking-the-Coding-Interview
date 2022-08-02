# 1.4 Palindrome Permutation . .

## Question
Given a string, write a function to check if it is a permutation of a palindrome. </br>
A palindrome is a word or phrase that is the same forwards and backwards. A permutation </br>
is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words. </br>

EXAMPLE </br>
Input: Tact Coa </br>
Output: True (permutations: "taco cat". "atco cta". etc.) </br>


## Solution

Sol 1:如果是回文，表示最多只有1個字母個數是奇數,這邊建立array 統計字母個數,最後判斷最多存在1個奇數數量的字母(亦可使用hash map)<br>
Time:O(N)
``` c++
bool isPermutationOfPalindrome(const string &phrase){
    int letters_cnt [26] = {0};
    for(auto &c : phrase){
        int val = c;
        if(c <= 'z' && c >= 'a'){
            letters_cnt[c-'a']++;
        }
        else if (c <= 'Z' && c >= 'A'){
            letters_cnt[c-'A']++;
        }
    }
    int odd_cnt = 0;
    for(int n : letters_cnt){
        if(n % 2){
            odd_cnt += 1;
        }
        if(odd_cnt >1)
            return false;
    }
    return true;
}
```





Sol 2:因為不分大小寫,最多26bit ,將每個數字轉換成2進位對應的數字,對每個數字用xor 邏輯閘(會將出現偶數次消除,最後判斷數字是否最多含有1個1<br>
Time:O(N) 

``` c++
bool isPermutationOfPalindrome(const string &phrase){
    int n = 0;
    for(auto &c : phrase){
        int val = c;
        if(c <= 'z' && c >= 'a'){          
            n = n ^ ( 1 << (c-'a'));
        }
        else if (c <= 'Z' && c >= 'A'){
            n = n ^ ( 1 << (c -'A'));
        }
    }    
    cout << n << endl;
    return (n &(n - 1)) == 0;
}

```    

