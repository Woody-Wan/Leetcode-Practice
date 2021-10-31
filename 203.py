# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def removeElements(self, head, val):
        dummy_head = ListNode(next = head)
        cur = dummy_head
        while (cur.next != None):
            if (cur.val == val):
                cur.next = cur.next.next
            else:
                cur = cur.next
            return dummy_head.next
