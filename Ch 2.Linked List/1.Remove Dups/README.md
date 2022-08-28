# 2.1 Remove Dups . .

## Question
Write code to remove duplicates from an unsorted linked list.
How would you solve this problem if a temporary buffer is not allowed?


## Solution

Sol 1:<br>
這邊使用dummy->next做為迴圈的條件,每次把值存入hashset,如果有重覆讓dummy->next指向dummy->next->next

``` c++
// space complexity - O(n)
// time complexity - O(n)
void removeDup(Node* head) {
    Node* dummy = head;
    std::unordered_set<int> numbers;
  
    while(dummy->next){
        numbers.insert(dummy->data);
        if(numbers.count(dummy->next->data))
        {
             dummy->next = dummy->next->next;                
        }
        else{
            dummy = dummy->next;
        }
     }
} 
```

類似的做法,while 用curr,此時就必須儲存prev,當curr 已出現,必須讓prev指向curr->next

``` c++
void removeDup(Node* head) {
    Node* curr = head->next;
    Node* prev = head;     
    std::unordered_set<int> numbers;   
    numbers.insert(head->data); 
    while(curr){
        if(numbers.count(curr->data)){
            prev->next =curr->next;
        }
        else{
            prev = curr;
        }
        numbers.insert(curr->data);
        curr = curr->next;
     }
}  
```  


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


Sol 2:
``` c++
//space complexity O(1)
// time complexity O(n^2)
/**
 * [removeDuplicates Remove duplicates without using extra space]
 * @param head [head of list]
 */
void removeDuplicates( Node * head ) {
	if ( head == nullptr || ( head && (head->next == nullptr))) {
		return;
	}
	Node * curr = head;
	while(curr) {
		Node * runner = curr;
		while (runner->next != nullptr) {
			if (runner->next->data == curr->data) {
				runner->next = runner->next->next;
			} else {
				runner = runner->next;
			}
		}
		curr = curr->next;
	}
}
```
