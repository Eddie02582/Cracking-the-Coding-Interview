

#include <iostream>
#include <unordered_map>
#include <random>


struct Node {
	int data = 0;
	Node * next = nullptr;
};

/**
 * [insert - insert a node at the head of list]
 * @param head [head of the list]
 * @param data [new node's data]
 */
void insert( Node * & head, int data )
{
	Node * newNode = new Node;
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

/**
 * [printList Helper routine to print list]
 * @param head [head of the list]
 */
void printList( Node * head ) {
	while( head ) {
		std::cout << head->data << "-->";
		head = head->next;
	}
	std::cout << "nullptr" << std::endl;
}

//generate a random int between min and max
/**
 * [random_range helper routine to generate a random number between min and max (including)]
 * @param  min [min of range]
 * @param  max [max of range]
 * @return     [A random number between min and max]
 */
static inline int random_range(const int min, const int max) {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> distribution(min, max);
	return distribution(mt);
}


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


int main() {
	std::cout << "Method 1 : \n";
	Node * head = nullptr;
	for ( int i = 0; i < 10; ++i ) {
		insert(head, random_range(1,7));
	}
	printList(head);
	
	for ( int i = 0; i < 10; ++i ) {
    	Node*dummy = kthToLastRecursive(head,i);
    	printList(dummy);
    	
    	Node*dummy2 = kthToLastIterative(head,i);
    	printList(dummy2);
	    std::cout << "--------" <<  std::endl;
	}
	
	return 0;
}












