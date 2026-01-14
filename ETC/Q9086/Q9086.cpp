/*
[백준 9086번] 문자열
- 난이도: Bronze Ⅴ
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
    int testCase = 0;

    std::cin >> testCase;

    while (testCase--)
    {
        std::cin >> str;
        std::cout << str.front() << str.back() << "\n";
    }

    return 0;
}