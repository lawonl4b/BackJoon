/*
[백준 11382번] 꼬마 정민
- 난이도: Bronze V
- 분류: 구현, 사칙연산
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long a = 0;
    long b = 0;
    long c = 0;

    std::cin >> a >> b >> c;

    std::cout << a + b + c << std::endl;

    return 0;
}