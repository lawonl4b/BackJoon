/*
[백준 2562번] 최댓값
- 난이도: Bronze Ⅲ
- 분류: 구현
- 언어: C++(17)
- 메모리: 2020 KB
- 시간: 0 ms
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<int> numbers(9);

    int count = numbers.size();
    for (int i = 0; i < count; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << *std::max_element(numbers.begin(), numbers.end()) << "\n";
    int max_index = std::max_element(numbers.begin(), numbers.end()) - numbers.begin();
    std::cout << max_index + 1 << "\n";

    return 0;
}