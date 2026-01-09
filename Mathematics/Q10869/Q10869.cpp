/*
[백준 10869번] 사칙연산
- 난이도: Bronze V
- 분류: 구현, 사칙연산
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl;

    return 0;
}