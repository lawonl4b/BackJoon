/*
[백준 10250번] ACM 호텔
- 난이도: Bronze Ⅲ
- 분류: 수학, 구현, 사칙연산
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 0 ms
*/
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t = 0;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int h = 0;
        int w = 0;
        int n = 0;

        std::cin >> h >> w >> n;
        
        int floor = n % h;
        if (floor == 0)
        {
            floor = h;
        }

        int room = (n - 1) / h + 1;
        std::cout << floor * 100 + room << "\n";
    }
    
    return 0;
}