class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution():
    def deleteLastN(self, head, n):
        i = 0
        j = 0
        head_dummy = ListNode()
        head_dummy.next = head

        fast = head_dummy
        slow = head_dummy

        for i in range(n):
            fast = fast.next

        while fast.next:
            slow = slow.next
            fast = fast.next

        slow.next = slow.next.next
        return head_dummy.next

