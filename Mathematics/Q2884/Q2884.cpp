/*
[백준 2884번] 알람 시계
- 난이도: Bronze Ⅲ
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

    int h, m;
    std::cin >> h >> m;

    m -= 45;

    if (m < 0)
    {
        m += 60;
        h -= 1;
    }

    if (h < 0)
    {
        h = 23;
    }

    std::cout << h << " " << m << "\n";

    return 0;
}