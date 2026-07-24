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
public:
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;
        return isMirror(root->left, root->right);
    }

private:
    bool isMirror(TreeNode *t1, TreeNode *t2)
    {
        if (!t1 && !t2)
            return true;
        if (!t1 || !t2)
            return false;
        return (t1->val == t2->val) && isMirror(t1->right, t2->left) && isMirror(t1->left, t2->right);
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution sol;
    cout << "Result: " << (sol.isSymmetric(root) ? "true" : "false") << "\n"; // true
    return 0;
}