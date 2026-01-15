/*
[백준 31403번] A + B - C
- 난이도: Bronze Ⅳ
- 분류: 구현, 수학, 문자열
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 0 ms
*/
#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b, c = 0;
    std::cin >> a >> b >> c;
    std::cout << a + b - c << "\n";
    std::cout << std::stoi(std::to_string(a) + std::to_string(b)) - c << "\n";

    return 0;
}