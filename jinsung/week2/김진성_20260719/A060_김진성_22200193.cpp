#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> rec; // 점수 기록용 배열
        for (const string &op : ops)
        {
            // 연산자에 따라 로직 분기
            switch (op[0])
            {
            case '+': // 이전 두 점수 합산
                rec.push_back(rec.back() + rec[rec.size() - 2]);
                break;
            case 'D': // 이전 점수 두 배
                rec.push_back(rec.back() * 2);
                break;
            case 'C': // 이전 점수 취소 (제거)
                rec.pop_back();
                break;
            default: // 일반 숫자 입력
                rec.push_back(stoi(op));
                break;
            }
        }
        int totalSum = 0;
        for (int s : rec)
            totalSum += s; // 최종 합계 계산
        return totalSum;
    }
};