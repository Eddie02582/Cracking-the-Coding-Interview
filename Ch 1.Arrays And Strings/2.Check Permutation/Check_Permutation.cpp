
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;


bool checkPermutation(string s1,string s2){
    if (s1.size() != s2.size())
        return false;
    int char_table [250] = {0};
    for(auto &c : s1)
        char_table[int(c)]++;
    
    for(auto &c : s2){
        int val = c;
        char_table[val]--; 
        if (char_table[val] < 0)
            return false;        
    }    
    return true;  
}

bool checkPermutation_sort(string s1,string s2){
    if (s1.size() != s2.size())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}


int main() {
// Test Method 1 - Using sort
    cout << "Method 1 - Using character count" << endl;
    string str1 = "testest";
    string str2 = "estxest";
    if(checkPermutation(str1, str2))
      cout << str1 <<" and " << str2 << " are permutation of each other" << endl;
    else
      cout << str1 <<" and " << str2 << " are not permutation of each other" << endl;
    str1 = "hello";
    str2 = "oellh";
    if(checkPermutation(str1, str2))
      cout << str1 <<" and " << str2 << " are permutation of each other" << endl;
    else
      cout << str1 <<" and " << str2 << " are not permutation of each other" << endl;

//Test Method 2 - Using character count
    cout << "Method 2 - Using sort" << endl;
    str1 = "testest";
    str2 = "estxest";
    if(checkPermutation_sort(str1, str2))
      cout << str1 <<" and " << str2 << " are permutation of each other" << endl;
    else
      cout << str1 <<" and " << str2 << " are not permutation of each other" << endl;
    str1 = "hello";
    str2 = "oellh";
     if(checkPermutation_sort(str1, str2))
      cout << str1 <<" and " << str2 << " are permutation of each other" << endl;
    else
      cout << str1 <<" and " << str2 << " are not permutation of each other" << endl;
    return 0;
}


