/*
[백준 15552번] 빠른 A+B
- 난이도: Bronze V
- 분류: 구현, 사칙연산, 수학
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 192 ms
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testCase = 0;
    std::cin >> testCase;

    int a = 0;
    int b = 0;

    for (int i = 0; i < testCase; i++)
    {
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }
    return 0;
}