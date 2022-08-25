class LinkedListNode:
     def __init__(self, x):
         self.data = x
         self.next = None
         
         
def deleteDups(n):
    set = ()
    previous = None
    while n!= None:
        if n.data in set:
            previous.next =n.next
        else:
            set.add(n.data)
            previous = n
        n.next
  
def deleteDups_no_buffer(head):
    current = head
    previous = None
    while current!= None:
        runner = current
        while runner.next:            
            if runner.next.data in current.data:
                runner.next =runner.next.next
            else:
                runner = runner.next
            previous = n
        current = current.next