/*
[백준 2438번] 별 찍기 - 1
- 난이도: Bronze V
- 분류: 구현
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 0 ms
*/
#include <iostream>
#include <string>

int main()
{
    // 입출력 최적화
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // '*' 문자를 i개만큼 채운 문자열을 만들어서 바로 출력
        std::string stars(i, '*');
        std::cout << stars << "\n";
    }

    return 0;
}