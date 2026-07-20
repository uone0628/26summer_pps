#include <iostream>
#include <vector>

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
private:
    TreeNode *build(std::vector<int> &n, int l, int r)
    {
        TreeNode *pNode = nullptr;
        return l > r ? nullptr : (pNode = new TreeNode(n[l + (r - l) / 2]), pNode->left = build(n, l, l + (r - l) / 2 - 1), pNode->right = build(n, l + (r - l) / 2 + 1, r), pNode);
    }

public:
    TreeNode *sortedArrayToBST(std::vector<int> &nums)
    {
        return build(nums, 0, (int)nums.size() - 1);
    }
};

void printPreorder(TreeNode *root)
{
    if (!root)
        return;
    std::cout << root->val << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main()
{
    Solution sol;
    std::vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode *root = sol.sortedArrayToBST(nums);
    std::cout << "Preorder: ";
    printPreorder(root);
    std::cout << "\n";
    return 0;
}