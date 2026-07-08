class Solution
{
public:
    int addDigits(int num)
    {
        // 수학적 성질(Digital Root)을 이용한 O(1) 풀이
        // 어떤 수의 각 자리 숫자를 반복해서 더한 값은 원래 수를 9로 나눈 나머지와 같습니다.
        if (num == 0)
            return 0;
        return 1 + (num - 1) % 9;
    }
};