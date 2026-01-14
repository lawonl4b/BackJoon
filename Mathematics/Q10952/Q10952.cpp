/*
[백준 10952번] A+B - 5
- 난이도: Bronze V
- 분류: 구현, 사칙연산, 수학
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b;

    while (true)
    {
        std::cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        std::cout << a + b << "\n";
    }

    return 0;
}