#include <stdio.h>

typedef struct ListNode
{
    int val;
    struct ListNode *next;
} Node;

class Solution
{
public:
    Node *reverseList(Node *head)
    {
        Node *prev_ptr = NULL;
        Node *curr_ptr = head;
        while (curr_ptr != NULL)
        {
            Node *next_tmp = curr_ptr->next;
            curr_ptr->next = prev_ptr;
            prev_ptr = curr_ptr;
            curr_ptr = next_tmp;
        }
        return prev_ptr;
    }
};