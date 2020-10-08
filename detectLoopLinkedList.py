#Program to detect loop in linkedlist using Python
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

def detectLoop(head: ListNode) ->bool:
        if (head == None):
            return False
        slow = head
        fast = head.next
        while (slow != fast):
            if (fast == None or fast.next == None):
                return False
            slow = slow.next
            fast = fast.next.next
        return True
#Example with only one element in the linkedList

l = ListNode(1)
detectLoop(l)

#Output: False
