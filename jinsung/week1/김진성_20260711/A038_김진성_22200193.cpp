class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;

        // 뉴턴-랩슨법을 이용한 제곱근 탐색 (이분 탐색보다 빠른 접근)
        long long r = x;
        while (r * r > x)
        {
            r = (r + x / r) / 2;
        }

        return r;
    }
};