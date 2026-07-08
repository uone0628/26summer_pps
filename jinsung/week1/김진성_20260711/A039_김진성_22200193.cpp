class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        // 비트 연산을 이용한 O(1) 최적화
        // 2의 제곱수는 이진수로 표현했을 때 숫자 1이 딱 1개만 존재하는 특징을 가짐
        return n > 0 && (n & (n - 1)) == 0;
    }
};