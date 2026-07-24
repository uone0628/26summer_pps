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
    int maxDiameter = 0;

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        maxDepth(root);
        return maxDiameter;
    }

private:
    int maxDepth(TreeNode *node)
    {
        if (!node)
            return 0;
        int left = maxDepth(node->left);
        int right = maxDepth(node->right);
        maxDiameter = max(maxDiameter, left + right);
        return max(left, right) + 1;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    cout << "Result: " << sol.diameterOfBinaryTree(root) << "\n"; // 3
    return 0;
}