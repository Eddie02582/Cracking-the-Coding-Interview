# 2.2 Return Kth to Last . .

## Question
Return Kth to Last: Implement an algorithm to find the kth to last element of a singly linked list.<br>

類似題 <a href ="https://leetcode.com/problems/remove-nth-node-from-end-of-list/">19. Remove Nth Node From End of List</a>

## Solution

Sol 1:先計算總長度,換算從頭開始第幾個


``` c++
struct Node {
	int data = 0;
	Node * next = nullptr;
};


Node * kthToLastRecursive(Node* head,int k) {
    Node* dummy = head;
    int count = 0;
    while (dummy){
        count++;
        dummy = dummy->next;
    }
    int front = (count - k + 1
    if (front <= 0)
         return nullptr; 
    
    dummy = new Node;
    dummy->next = head;
    
    while(front){  
        front--;
        dummy = dummy->next;          
    }
    return dummy;
} 

```

Sol 2:利用雙ptr,先讓prt1走k,最後同時讓ptr1和ptr2同時走,當ptr1走到,ptr2剛好在倒數k位置

```
ex :
    head = 1->2->3->4->5, k = 2
	
    1  -> 2 -> 3 - > 4 -> 5 ->nullptr
              ptr1
    prt2
-----------------------------    
                                ptr1
                    prt2
```
``` c++

Node * kthToLastIterative( Node * head, int k ) {
  if ( head == nullptr ) {
    return head;
  }

  Node * ptr1 = head;
  Node * ptr2 = head;

  int i = 0;
  while( i < k && ptr1 ) {
    ptr1 = ptr1->next;
    ++i;
  }

  //out of bounds
  if ( i < k ) {
    return nullptr;
  }

  while( ptr1 != nullptr ) {
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }

  return ptr2;
}
 
```  

