/*
[백준 10818번] 최소, 최대
- 난이도: Bronze Ⅲ
- 분류: 수학, 구현
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 100 ms
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 0;
    std::cin >> n;

    int min = 1000000;
    int max = -1000000;

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        std::cin >> temp;

        if (temp < min)
        {
            min = temp;
        }
        if (temp > max)
        {
            max = temp;
        }
    }
    std::cout << min << " " << max << "\n";

    return 0;
}