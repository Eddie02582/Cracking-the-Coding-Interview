#include <iostream>
#include <string>
using namespace std;

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
        if(n % 2)
            odd_cnt++;
        if(odd_cnt >1)
            return false;
    }
    return true;
}

bool isPermutationOfPallindrome2(const string &phrase){
    int letters_cnt [26] = {0};
    int odd_cnt = 0;
    for(auto &c : phrase){
        int index = -1;        
        if(c <= 'z' && c >= 'a'){
             index = c -'a';            
        }
        else if (c <= 'Z' && c >= 'A'){
            index = c -'A';
        }
        if(index != -1){
            letters_cnt [index]++;
            if(letters_cnt [index] %2)
                odd_cnt++;          
            else
               odd_cnt--;
        }
    }    
    return odd_cnt <= 1;
}




bool isPermutationOfPallindrome3(const string &phrase){
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
    return (n &(n - 1)) == 0;
}

int main()
{
    std::string str("Tact Coa");
    std::cout << "Does \"" << str << "\"  has a string whose permutation is a pallindrome? "
              << "( 1 for true, 0 for false ) : " << std::endl;
    std::cout << "Approach 1:" << isPermutationOfPalindrome( str )  << std::endl;
    std::cout << "Approach 2:" << isPermutationOfPallindrome2( str ) << std::endl;
    std::cout << "Approach 3:" << isPermutationOfPallindrome3( str ) << std::endl;


    std::string str1("A big Cat");
    std::cout << "Does \"" << str1 << "\" has a string whose permutation is a pallindrome? "
              << "( 1 for true, 0 for false ) : " << std::endl;
    std::cout << "Approach 1:" << isPermutationOfPalindrome( str1 ) << std::endl;
    std::cout << "Approach 2:" << isPermutationOfPallindrome2( str1 ) << std::endl;
    std::cout << "Approach 3:" << isPermutationOfPallindrome3( str1 ) << std::endl;


    std::string str2("Aba cbc");
    std::cout << "Does \"" << str2 << "\" has a string whose permutation is a pallindrome? "
              << "( 1 for true, 0 for false ) : " << std::endl;
    std::cout << "Approach 1:" << isPermutationOfPalindrome( str2 ) << std::endl;
    std::cout << "Approach 2:" << isPermutationOfPallindrome2( str2 ) << std::endl;
    std::cout << "Approach 3:" << isPermutationOfPallindrome3( str2 ) << std::endl;
    return 0;
}