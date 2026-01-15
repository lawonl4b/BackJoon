/*
[백준 2439번] 별 찍기 - 2
- 난이도: Bronze Ⅳ
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

    int n = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}