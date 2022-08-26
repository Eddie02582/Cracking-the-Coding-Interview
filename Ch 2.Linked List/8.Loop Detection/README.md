# 2.8 Loop Detection . .

## Question(<a href = "https://leetcode.com/problems/intersection-of-two-linked-lists/">160. Intersection of Two Linked Lists</a>)
```
Intersection: Given two (singly) linked lists, determine if the two lists intersect. Return the intersecting
node. Note that the intersection is defined based on reference, not value. That is, if the kth
node of the first linked list is the exact same node (by reference) as the jth node of the second
linked list, then they are intersecting.
```


## Solution

<a href = "https://github.com/Eddie02582/Leetcode/blob/master/142_Linked%20List%20Cycle%20II.md">Linked List Cycle</a>

```c++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                break;            
        }
        if(!fast || !fast->next)
            return nullptr;
        ListNode* curr = head;
        
        while(curr != slow){
            curr = curr->next;
            slow = slow->next;
        }    
        return curr;    
    }
};
```
