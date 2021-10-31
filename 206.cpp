class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* temp;
		ListNode* cur = head;
		ListNode* pre = nullptr;
		while (cur) {
			temp = cur->next;
			cur->next = pre;
			pre = cur;
			cur = temp;
		}
		return pre;
	}
};
public:
	LinkedNode* reverse(LinkedNode* head) {
		if (cur == nullptr) {
			return pre
		}
		LinkedNode* temp = cur->next;
		cur->next = pre;
		return reverse(cur, temp)
	}
	ListNode* reverse(LinkedNode* head) {
		return reverse(NULL, head)
	}