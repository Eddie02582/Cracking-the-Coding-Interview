# 1.5 One Away . .

## Question
There are three types of edits that can be performed on strings: insert a character, </br>
remove a character, or replace a character. Given two strings, write a function to check if they are </br>
one edit (or zero edits) away. </br>

## Solution

Sol 1:

考慮三種情況</br>
<ul>
    <li><strong>Replacement</strong>考慮兩個字串,ex bale 和 pale,可以藉由取代一字元,由 bale變成成pale,這意味著它們只在一個地方不同。</li>
    <li><strong>Insert</strong>兩個字串,ex apple 和 aple</li>
    <li><strong>Remove</strong>反過來的Insert</li>
</ul>

``` c++ 
#include<string>
#include<iostream>
#include <algorithm> 
#include <cmath>
using namespace std;
bool oneInsert(string s1, string s2){
    int m = s1.size(),n = s2.size();  
    
    int p = 0,q = 0;    
    bool foundDifference = false;
    while (p < m){
        if(s1[p] != s2[q]){          
            if(foundDifference)
                return false; 
            foundDifference = true;          
        }
        else{
            q++;
        }
        
        p++;
    }       
    return true;
    
}


bool oneReplace(string s1, string s2){
    bool foundDifference = false;
    for(int i = 0;i < s1.size();i++){
        if(s1[i] != s2[i])
        {
            if(foundDifference)
                return false; 
            foundDifference = true;
        }
    }        
    return true;
}


bool isOneAway(string s1, string s2){
    
    int m = s1.size(),n = s2.size();
    if( m == n )
        return oneReplace(s1,s2);
    else if (m  == n + 1)
        return oneInsert(s1,s2);
    else if (m  == n - 1)
        return oneInsert(s2,s1);
    else
        return false;
}
```
將上述減化,當兩指針對應字元不一樣,replace大小指針都需移動,insert(delete)只需要移動大指針

```c++
bool isOneAway(string s1, string s2){  
    int m = s1.size(),n = s2.size();
    if ( abs(m - n) > 1 ) {
        return false;
    }    
    string small = m < n ? s1 : s2;
    string big   = m > n ? s1 : s2;

    m = big.size();
    n = small.size();
    int p = 0,q = 0;   
    bool mismatchDone = false;
    while (p < m){
        if(s1[p] != s2[q]){              
            if(mismatchDone)
                return false;  
            mismatchDone = true;
            //for replace
            if( m == n){
                q++;   
            }                
        }
        else{
            q++;
        }        
        p++;
    }
    return true;   
  
}
```
Sol 2:dp<br>

<a href= "https://leetcode.com/problems/edit-distance/">Leetcode 72. Edit Distance</a>

```c++
bool isOneAway(string s1, string s2){
    int m = s1.size(),n = s2.size();
    if((m -n ) < -1 || (m -n ) >1)
        return false;
    
    vector<vector<int>> dp (n + 1,vector<int>{m + 1});
   
    for(int i = 0;i< n + 1;i++){
        dp[i][0] = i;
    }
    for(int j = 0;j<m + 1;j++){
        dp[0][j] = j;
    } 
    for(int i = 1; i < n + 1;i++){
        for(int j = 1;j<m + 1;j++){
            if(s1[j - 1] == s2[i - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = min({dp[i - 1][j - 1],dp[i - 1][j],dp[i][j - 1]}) + 1;
        }
    }
    return dp[n][m] < 1;    
}
```


