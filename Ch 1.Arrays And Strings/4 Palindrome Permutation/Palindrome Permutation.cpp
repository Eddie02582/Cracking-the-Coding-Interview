#include <iostream>
#include <string>
#include <unordered_map>


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


bool isPermutationOfPalindrome_bit(const string &phrase){
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




int main()
{

    const string s = "Tact !Coa";  
    cout << isPermutationOfPalindrome(s) <<endl;
    cout << isPermutationOfPalindrome_bit(s) <<endl;
    return 0;
}
