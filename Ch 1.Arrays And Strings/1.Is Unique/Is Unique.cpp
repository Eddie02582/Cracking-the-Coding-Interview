/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;


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

bool isUniqueChars_sort( string str) {	
	sort(str.begin(), str.end()); // O(nlogn) sort from <algorithm>
	for ( int i = 0 ; i < str.size() - 1; i++){
		if ( str[i] == str[i+1] )
			return false;		
	}
	return true;	
}


//set
bool isUniqueChars_set(string s){
    unordered_set<char> exist ;    
    for(auto &c : s){        
        if(exist.find(c) != exist.end())
            return false;
        exist.insert(c);
    } 
    return true;    
}


int main(){
	vector<string> words = {"abcde", "hello", "apple", "kite", "padle"};
	for (auto word : words)
	{
		cout << word << string(": ") << boolalpha << isUniqueChars(word) <<endl;
	}
	cout <<endl << "Using bit vector" <<endl;
	for (auto word : words)
	{
		cout << word << string(": ") << boolalpha << isUniqueChars_sort(word) <<endl;
	}
	cout <<endl << "Using no Data Structures" <<endl;
	for (auto word : words)
	{
		cout << word << string(": ") << boolalpha << isUniqueChars_set(word) <<endl;
	}
	return 0;
}
