/**
 * Cracking the coding interview edition 6
 * Problem 2.7 Intersection
 * Given two linked lists, if they both intersect at some point.
 * Find out the intersecting point else return nullptr.
 * Intersection is defined based on reference not value.
 */

#include <iostream>
#include <cmath>
using namespace std;
struct Node {
  int data;
  Node * next;
  Node( int d ) : data{ d }, next{ nullptr } { }
};

/**
 * [printList Helper routine to print list]
 * @param head [head of the list]
 */
void printList( Node * head )
{
  while( head ) {
    std::cout << head->data << "-->";
    head = head->next;
  }
  std::cout << "NULL" << std::endl;
}


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


int main()
{
  Node * list1 = new Node(3);
  list1->next = new Node(6);
  list1->next->next = new Node(9);
  list1->next->next->next = new Node(12);
  list1->next->next->next->next = new Node(15);
  list1->next->next->next->next->next = new Node(18);

  Node * list2 = new Node(7);
  list2->next = new Node(10);
  list2->next->next = list1->next->next->next;

  printList(list1);
  printList(list2);

  Node * intersectingNode = intersectionPoint2( list1 , list2 );
  if (intersectingNode) {
    std::cout << "Intersecting Node of lists is :" << intersectingNode->data << std::endl;
  } else {
    std::cout << "Lists do not interset" << std::endl;
  }
  return 0;
}















