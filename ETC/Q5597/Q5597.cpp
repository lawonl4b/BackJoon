/*
[백준 5597번] 과제 안 내신 분..?
- 난이도: Bronze Ⅲ
- 분류: 구현
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 0 ms
*/
#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 0;
    std::vector<bool> studentNumber(31, false);

    for (int i = 0; i < 28; i++)
    {
        std::cin >> n;
        studentNumber[n] = true;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (!studentNumber[i])
        {
            std::cout << i << "\n";
        }
    }

    return 0;
}