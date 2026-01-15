/*
[백준 15964번] 이상한 기호
- 난이도: Bronze Ⅴ
- 분류: 구현, 수학, 사칙연산
- 언어: C++(17)
- 메모리: 2024 KB
- 시간: 0 ms
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long a = 0;
    long long b = 0;

    std::cin >> a >> b;

    std::cout << (a + b) * (a - b) << "\n";

    return 0;
}