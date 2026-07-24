#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
    TreeNode *curr;

public:
    TreeNode *increasingBST(TreeNode *root)
    {
        TreeNode *dummy = new TreeNode(0);
        curr = dummy;
        inorder(root);
        return dummy->right;
    }

private:
    void inorder(TreeNode *node)
    {
        if (!node)
            return;
        inorder(node->left);
        node->left = nullptr; // 기존 left 포인터 초기화
        curr->right = node;
        curr = node;
        inorder(node->right);
    }
};

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(7);

    Solution sol;
    TreeNode *res = sol.increasingBST(root);

    cout << "Result: ";
    while (res)
    {
        cout << res->val << " ";
        res = res->right;
    }
    cout << "\n";
    return 0;
}