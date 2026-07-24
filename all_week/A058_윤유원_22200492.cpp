#include <iostream>
using namespace std;

// LeetCode에서 제공하는 기본 구조체 정의
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while (curr != nullptr)
        {
            ListNode *nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
};

int main()
{
    // 테스트용 연결 리스트 생성: 1 -> 2 -> 3
    ListNode *head = new ListNode(1, new ListNode(2, new ListNode(3)));

    Solution sol;
    ListNode *reversed = sol.reverseList(head);

    cout << "Result: ";
    while (reversed != nullptr)
    {
        cout << reversed->val << " ";
        reversed = reversed->next;
    }
    cout << "\n";
    return 0;
}