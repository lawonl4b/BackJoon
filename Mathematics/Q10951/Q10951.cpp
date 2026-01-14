/*
[백준 10951번] A+B - 4
- 난이도: Bronze V
- 분류: 구현, 사칙연산, 수학
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 0 ms
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a = 0;
    int b = 0;

    while (std::cin >> a >> b)
    {
        std::cout << a + b << "\n";
    }

    return 0;
}