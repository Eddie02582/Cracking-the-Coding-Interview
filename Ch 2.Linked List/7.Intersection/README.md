# 2.7 Intersection . .

## Question(<a href = "https://leetcode.com/problems/intersection-of-two-linked-lists/">160. Intersection of Two Linked Lists</a>)
```
Intersection: Given two (singly) linked lists, determine if the two lists intersect. Return the intersecting
node. Note that the intersection is defined based on reference, not value. That is, if the kth
node of the first linked list is the exact same node (by reference) as the jth node of the second
linked list, then they are intersecting.
```


## Solution

<img src = "Intersection.png">


Sol:1
將比較長的移動到跟短的一樣位置,在開始比對

```c++

int getNodeLength(Node * head){    
    int count = 0;
    while(head){
        ++count;
        head = head->next; 
    }
    return count;
}

Node * intersectionPoint2( Node * head1, Node * head2 )
{
    int length1 = getNodeLength(head1);
    int length2 = getNodeLength(head2);
    Node * ptr1 = length1 >= length2 ? head1:head2;
    Node * ptr2 = length1 < length2 ? head1:head2;
    int diff = abs(length1 - length2);
    //move let prt1 len = ptr2 = len    
    while (diff--){
        ptr1 = ptr1->next;      
    }
    
    while(ptr1 && ptr2){
        if(ptr1 == ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }    
    return nullptr;
}
```

