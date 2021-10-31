class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def swapNode(self, head):
        res = ListNode(next = head)
        pre = ListNode(res)

        while pre.next and pre.next.next:
            cur = pre
            post = cur.next

            cur.next = post.next
            post.next = cur
            pre.next = post

            pre = pre.next.next
        return res.next

