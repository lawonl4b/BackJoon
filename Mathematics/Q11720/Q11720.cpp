/*
[백준 11720번] 숫자의 합
- 난이도: Bronze Ⅴ
- 분류: 구현, 수학, 문자열
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 0 ms
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 0;
    std::cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = '\0';
        std::cin >> ch;
        sum += ch - '0';
    }

    std::cout << sum << "\n";

    return 0;
}