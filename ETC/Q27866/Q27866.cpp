/*
[백준 27866번] 문자와 문자열
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
    int idx = 0;

    std::cin >> str;
    std::cin >> idx;

    std::cout << str[idx - 1] << "\n";

    return 0;
}