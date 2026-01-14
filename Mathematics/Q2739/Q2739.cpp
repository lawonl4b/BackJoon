/*
[백준 2739번] 구구단
- 난이도: Bronze V
- 분류: 구현, 수학
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
    for (int i = 1; i < 10; i++)
    {
        std::cout << n << " * " << i << " = " << n * i << "\n";
    }

    return 0;
}