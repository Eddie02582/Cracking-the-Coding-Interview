# 2.5 Sum Lists . .

## Question(<a href = "https://leetcode.com/problems/add-two-numbers/">Leetcode 2. Add Two Numbers</a>)
```
You have two numbers represented by a linked list, where each node contains a single
digit. The digits are stored in reverse order, such that the 1 's digit is at the head of the list. Write a
function that adds the two numbers and returns the sum as a linked list.

EXAMPLE
    Input: (7 -> 1 -> 6) + (5 -> 9 -> 2) .Thatis,617 + 295.
    Output: 2 -> 1 -> 9. That is, 912.
    
FOLLOW UP
Suppose the digits are stored in forward order. Repeat the above problem.
EXAMPLE
    Input: (6 -> 1 -> 7) + (2 -> 9 -> 5).Thatis,617 + 295.
    Output: 9 -> 1 -> 2. That is, 912.
```
## Solution
Sol:1

```c++
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;
        while (l1  || l2)
        {
            int n = carry;
            if (l1){        
                n += l1->val;
                l1 = l1->next;
            }
            if (l2)  {       
                n += l2->val;         
                l2 = l2->next; 
            }
            carry = 0;
            if (n > 9){
                carry = 1;
                n -= 10;
            }         
            curr->next = new ListNode(n);   
            curr = curr->next;
        }
        if (carry)
            curr->next = new ListNode(1);
        
        return dummy->next;
    }
```

