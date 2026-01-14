/*
[백준 14681번] 사분면 고르기
- 난이도: Bronze V
- 분류: 구현, 기하학
*/
#include <iostream>

int main()
{
    int x = 0;
    int y = 0;
    std::cin >> x >> y;

    if (x > 0 && y > 0)
        std::cout << "1" << std::endl;
    else if (x < 0 && y > 0)
        std::cout << "2" << std::endl;
    else if (x < 0 && y < 0)
        std::cout << "3" << std::endl;
    else
        std::cout << "4" << std::endl;
    
    return 0;
}