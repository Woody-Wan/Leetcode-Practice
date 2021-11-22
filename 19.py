# Definition for singly-linked list.
class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next

class Solution:
    def removeNthFromEnd(self, head, n)
        head_dummy = ListNode()
        head_dummy.next = head

        slow = head_dummy
        fast = head_dummy

        while n > 0:
            fast = fast.next
            n -= 1

        while fast.next != None:
            slow = slow.next
            fast = fast.next

        slow.next = slow.next.next

        return head_dummy.next


