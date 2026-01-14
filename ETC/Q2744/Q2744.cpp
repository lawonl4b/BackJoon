/*
[백준 2744번] 대소문자 바꾸기
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
    std::cin >> str;

    int len = str.length();

    for (char &c : str)
    {
        if (std::isupper(c))
        {
            c = static_cast<char>(std::tolower(c));
        }
        else
        {
            c = static_cast<char>(std::toupper(c));
        }
    }
    std::cout << str << "\n";

    return 0;
}