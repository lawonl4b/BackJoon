/*
[백준 2741번] N 찍기
- 난이도: Bronze V
- 분류: 구현
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
        std::cout << i << "\n";
    }

    return 0;
}