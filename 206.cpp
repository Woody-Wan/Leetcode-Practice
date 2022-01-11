#include <iostream>
#include<cstdlib>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp;
        ListNode* cur = head;
        LisrNode* pre = NULL;
        while (cur) {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};

int main()
{
    cout << "Hello World!\n";
}


