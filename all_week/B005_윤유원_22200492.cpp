#include <iostream>
#include <unordered_set>
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
    unordered_set<int> seen;

public:
    bool findTarget(TreeNode *root, int k)
    {
        if (!root)
            return false;
        if (seen.count(k - root->val))
            return true;
        seen.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);

    Solution sol;
    cout << "Result: " << (sol.findTarget(root, 9) ? "true" : "false") << "\n"; // true
    return 0;
}