# 2.6 Palindrome . .

## Question(<a href = "https://leetcode.com/problems/palindrome-linked-list/">234. Palindrome Linked List</a>)
```
Implement a function to check if a linked list is a palindrome
```
## Solution
Sol:1

```c++
    bool isPalindrome(ListNode* head) {
        vector<int> values ;
        ListNode *fast = head;
        ListNode *slow = head; 
        
        while (fast && fast->next){            
            values.push_back(slow->val);
            fast = fast->next->next;
            slow = slow->next;
        }
        
        if(fast)           
            slow = slow->next;            
      
        
        while (slow != NULL){     
            if(slow->val != values.back())
               return false;
            values.pop_back();
            slow = slow->next;
        }
        return true;
    }
```

