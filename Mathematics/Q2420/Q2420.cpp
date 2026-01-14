/*
[백준 2420번] 사파리월드
- 난이도: Bronze V
- 분류: 구현, 사칙연산, 수학
*/
#include <iostream>

int main()
{
    long long n = 0;
    long long m = 0;

    long long result = 0;

    std::cin >> n >> m;

    result = n - m;

    if (result < 0)
        result = -result;

    std::cout << result << std::endl;

    return 0;
}