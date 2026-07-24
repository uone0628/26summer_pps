#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        if (!root)
            return 0;
        int sum = 0;
        if (root->val >= low && root->val <= high)
            sum += root->val;
        if (root->val > low)
            sum += rangeSumBST(root->left, low, high);
        if (root->val < high)
            sum += rangeSumBST(root->right, low, high);
        return sum;
    }
};

int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);

    Solution sol;
    cout << "Result: " << sol.rangeSumBST(root, 7, 15) << "\n"; // 32 (7+10+15)
    return 0;
}