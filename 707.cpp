// 707.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class MyListNode {
public:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int val) : val(val), next(NULL) {}
    };


    MyListNode() {
        _dummyhead = new ListNode(0);
        _size = 0;
    }

    int get(int index) {
        if (index > (_size - 1) || index < 0) {
            return -1;
        }
        while (index--) {
            cur = cur->next;
        }
        return cur->val;
    }

    void AddFrontNode(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = _dummyhead->next;
        _dummyhead->next = newNode;
        _size++;
    }

    void AddTailNode(int val) {
        ListNode* newNode = new ListNode(val);
        ListNode* cur = _dummyhead;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = newNode;
        _size++;
    }

    void InsertNode(int index, int val) {
        if (index > _size) {
            return;
        }
        ListNode* newNode = new ListNode(val);
        ListNode* cur = _dummyhead;
        while (index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }
    void DeleteNode(int index) {
        if (index > _size || index < 0) {
            return;
        }
        ListNode* tmp = _dummyhead;
        while (index--) {
            cur = cur->next;
        }
        ListNode* temp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        _size--;
    }
    void printLinkedList() {
        ListNode* cur = _dummyhead;
        while (cur->next != NULL) {
            cout << cur->next->val << " ";
            cur = cur->next;
        }
        cout << endl;
    }
private:
    int _size;
    ListNode* _dummyHead;
};



int main()
{
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
