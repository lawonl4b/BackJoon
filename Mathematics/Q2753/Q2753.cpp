/*
[백준 2753번] 윤년
- 난이도: Bronze V
- 분류: 구현, 사칙연산, 수학
*/
#include <iostream>

int main()
{
    int year = 0;
    std::cin >> year;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        std::cout << "1" << std::endl;
    else
        std::cout << "0" << std::endl;

    return 0;
}