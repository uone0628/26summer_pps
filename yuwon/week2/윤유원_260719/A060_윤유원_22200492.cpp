#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        vector<int> records;
        for (string op : operations)
        {
            if (op == "+")
            {
                records.push_back(records.back() + records[records.size() - 2]);
            }
            else if (op == "D")
            {
                records.push_back(records.back() * 2);
            }
            else if (op == "C")
            {
                records.pop_back();
            }
            else
            {
                records.push_back(stoi(op));
            }
        }
        int sum = 0;
        for (int score : records)
            sum += score;
        return sum;
    }
};

int main()
{
    Solution sol;
    vector<string> ops = {"5", "2", "C", "D", "+"};
    cout << "Result: " << sol.calPoints(ops) << "\n";
    return 0;
}