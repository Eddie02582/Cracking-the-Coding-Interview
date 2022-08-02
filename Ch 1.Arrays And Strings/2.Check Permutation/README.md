# 1.2 Check Permutation . .

## Question
Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.


## Solution

Sol 1: 如果兩字串字元個數一樣，即為重組,亦可使用利用dictionary/hashMap</br>
Time:O(N)
c++
```
bool checkPermutation(string s1,string s2){
    if (s1.size() != s2.size())
        return false;
    int char_table [128] = {0};
    for(auto &c : s1)
        char_table[int(c)] += 1;
    
    for(auto &c : s2){
        int val = c;
        char_table[val] -= 1; 
        if (char_table[val] < 0)
            return false;        
    }    
    return true;  
}
```

Sol 2:排序,檢查陣列是否一樣</br>
Time:O(NlogN) 
``` c++
bool checkPermutation_sort(string s1,string s2){
    if (s1.size() != s2.size())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}
```   
