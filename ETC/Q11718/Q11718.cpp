/*
[백준 11718번] 그대로 출력하기
- 난이도: Bronze Ⅲ
- 분류: 구현, 문자열
- 언어: C++(17)
- 메모리: 2024 KB
- 시간: 0 ms
*/
#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string str;

    while (std::getline(std::cin, str))
    {
        std::cout << str << "\n";
    }
    return 0;
}