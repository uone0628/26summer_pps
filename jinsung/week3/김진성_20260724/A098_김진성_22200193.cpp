#include <iostream>
#include <unordered_set>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_set<ListNode *> visited;

        // A의 모든 노드 주소를 set에 저장
        while (headA != nullptr)
        {
            visited.insert(headA);
            headA = headA->next;
        }

        // B를 순회하며 set에 이미 존재하는 주소가 있는지 확인
        while (headB != nullptr)
        {
            if (visited.count(headB))
            {
                return headB; // 교차점 발견
            }
            headB = headB->next;
        }

        return nullptr;
    }
};

int main()
{
    ListNode *common = new ListNode(8);
    common->next = new ListNode(4);
    common->next->next = new ListNode(5);

    ListNode *headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = common;

    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = common;

    Solution sol;
    ListNode *res = sol.getIntersectionNode(headA, headB);
    cout << "Intersection Value: " << (res ? res->val : 0) << "\n";
    return 0;
}