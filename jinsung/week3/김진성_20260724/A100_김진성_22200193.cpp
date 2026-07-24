#include <iostream>
#include <queue>
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
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *curr = q.front();
            q.pop();

            if (curr->val >= low && curr->val <= high)
            {
                sum += curr->val;
            }
            // 이진 탐색 트리의 성질을 이용해 탐색 큐에 조건부 삽입
            if (curr->left && curr->val > low)
            {
                q.push(curr->left);
            }
            if (curr->right && curr->val < high)
            {
                q.push(curr->right);
            }
        }
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
    cout << "Result: " << sol.rangeSumBST(root, 7, 15) << "\n";
    return 0;
}