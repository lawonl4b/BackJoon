/*
[백준 1330번] 두 수 비교하기
- 난이도: Bronze V
- 분류: 구현
*/
#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    if (a < b)
        std::cout << "<" << std::endl;
    else if (a > b)
        std::cout << ">" << std::endl;
    else
        std::cout << "==" << std::endl;

    return 0;
}