#include <iostream>
#include <algorithm>
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
    bool isBalanced(TreeNode *root)
    {
        return checkHeight(root) != -1;
    }

private:
    int checkHeight(TreeNode *node)
    {
        if (!node)
            return 0;

        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1)
            return -1;

        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1)
            return -1;

        if (abs(leftHeight - rightHeight) > 1)
            return -1;

        return max(leftHeight, rightHeight) + 1;
    }
};

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    cout << "Result: " << (sol.isBalanced(root) ? "true" : "false") << "\n"; // true
    return 0;
}