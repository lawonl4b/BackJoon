/*
[백준 10807번] 개수 세기
- 난이도: Bronze V
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

    int n, v, count = 0;

    std::cin >> n;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cin >> v;

    for (int x : arr)
    {
        if (x == v)
        {
            count++;
        }
    }

    std::cout << count << "\n";

    return 0;
}