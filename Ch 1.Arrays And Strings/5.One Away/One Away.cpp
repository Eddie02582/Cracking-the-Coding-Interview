#include<string>
#include<iostream>
#include<vector>
#include <algorithm> 
#include <cmath>
using namespace std;

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


bool isOneAway2(string s1, string s2){  
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



int main(){
   
    cout << isOneAway("pale", "ple") << endl;
    cout << isOneAway("pales", "pale")<< endl;
    cout << isOneAway("pale", "pales")<< endl;
    cout << isOneAway("pale", "bale")<< endl; 
    cout << isOneAway("pale", "bake")<< endl; 
    return 0;

}

1
1
1
1
0