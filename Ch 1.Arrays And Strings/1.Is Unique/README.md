# 1.1 Is Unique . .

## Question
Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?


## Solution

Sol 1:假設128個字符(若不含ASCII延伸字元,可以縮小成128)，建立一個布林值的陣列判斷是否字元出現</br>
Time:O(N)
``` c++
bool isUniqueChars(string s){
	if (s.size() > 128)
		return false;
	 
    bool char_set [128] = {false};
    for(auto &c : s){
        int index = c;
        if(char_set[index])
            return false;
        char_set[index] = true;
    } 
    return true;  
}
```

Sol 2:若不使用額外空間,再檢查前後字元是否相同</br>
Time:O(NlogN) 

``` c++
#include <algorithm>
bool isUniqueChars_sort( string str) {	
	sort(str.begin(), str.end()); // O(nlogn) sort from <algorithm>
	for ( int i = 0 ; i < str.size() - 1; i++){
		if ( str[i] == str[i+1] )
			return false;		
	}
	return true;	
}

```  


Sol 3:利用set判斷是否出現
Time:O(N) 
``` c++
#include <unordered_set>

bool isUniqueChars_set(string s){
    unordered_set<char> exist ;    
    for(auto &c : s){        
        if(exist.find(c) != exist.end())
            return false;
        exist.insert(c);
    } 
    return true;    
}
```


