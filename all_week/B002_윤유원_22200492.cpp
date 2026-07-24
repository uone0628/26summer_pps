#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Definition for Employee.
class Employee
{
public:
    int id;
    int importance;
    vector<int> subordinates;
};

class Solution
{
public:
    int getImportance(vector<Employee *> employees, int id)
    {
        unordered_map<int, Employee *> umap;
        for (auto emp : employees)
        {
            umap[emp->id] = emp;
        }
        return dfs(id, umap);
    }

private:
    int dfs(int id, unordered_map<int, Employee *> &umap)
    {
        Employee *emp = umap[id];
        int total = emp->importance;
        for (int subId : emp->subordinates)
        {
            total += dfs(subId, umap);
        }
        return total;
    }
};

int main()
{
    Employee e1 = {1, 5, {2, 3}};
    Employee e2 = {2, 3, {}};
    Employee e3 = {3, 3, {}};

    Solution sol;
    cout << "Result: " << sol.getImportance({&e1, &e2, &e3}, 1) << "\n"; // 11
    return 0;
}