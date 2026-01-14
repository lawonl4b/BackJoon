/*
[백준 9498번] 시험 성적
- 난이도: Bronze V
- 분류: 구현
*/
#include <iostream>

int main()
{
    int score = 0;
    std::cin >> score;

    if (score >= 90)
        std::cout << "A" << std::endl;
    else if (score >= 80)
        std::cout << "B" << std::endl;
    else if (score >= 70)
        std::cout << "C" << std::endl;
    else if (score >= 60)
        std::cout << "D" << std::endl;
    else
        std::cout << "F" << std::endl;

    return 0;
}