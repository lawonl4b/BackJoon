/*
[백준 11654번] 아스키 코드
- 난이도: Bronze Ⅴ
- 분류: 구현
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 0 ms
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    char c;
    std::cin >> c;
    std::cout << static_cast<int>(c) << "\n";

    return 0;
}