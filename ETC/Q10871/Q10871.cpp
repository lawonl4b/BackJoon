/*
[백준 10871번] X보다 작은 수
- 난이도: Bronze V
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
    int n, x, temp;
    std::cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        if (temp < x)
        {
            std::cout << temp << " ";
        }
    }

    return 0;
}