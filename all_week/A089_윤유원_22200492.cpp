#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
    TreeNode *build(vector<int> &nums, int left, int right)
    {
        if (left > right)
            return nullptr;
        int mid = left + (right - left) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = build(nums, left, mid - 1);
        root->right = build(nums, mid + 1, right);
        return root;
    }

public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return build(nums, 0, (int)nums.size() - 1);
    }
};

void printPreorder(TreeNode *root)
{
    if (!root)
        return;
    cout << root->val << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main()
{
    Solution sol;
    vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode *root = sol.sortedArrayToBST(nums);
    cout << "Preorder: ";
    printPreorder(root);
    cout << "\n";
    return 0;
}