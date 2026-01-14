/*
[백준 10950번] A+B - 3
- 난이도: Bronze V
- 분류: 구현, 사칙연산, 수학
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a = 0;
    int b = 0;

    int testCase = 0;
    std::cin >> testCase;

    for (int i = 0; i < testCase; ++i)
    {
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }

    return 0;
}