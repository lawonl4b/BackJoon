/*
[백준 2475번] 검증수
- 난이도: Bronze Ⅴ
- 분류: 구현, 수학, 사칙연산
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 0 ms
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long result = 0;

    for (int i = 0; i < 5; i++)
    {
        int num = 0;
        std::cin >> num;
        result += num * num;
    }

    std::cout << result % 10 << "\n";

    return 0;
}