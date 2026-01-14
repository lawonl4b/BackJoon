/*
[백준 10872번] 팩토리얼
- 난이도: Bronze V
- 분류: 구현, 수학
*/
#include <iostream>

int main()
{
    int n = 0;
    int result = 1;

    std::cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    std::cout << result;

    return 0;
}