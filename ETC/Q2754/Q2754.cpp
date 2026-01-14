/*
[백준 2754번] 학점계산
- 난이도: Bronze Ⅲ
- 분류: 구현, 문자열
- 언어: C++(17)
- 메모리: 2024 KB
- 시간: 0 ms
*/
#include <iostream>
#include <string>

int main()
{
    // 1. 입출력 최적화
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // 2. 출력 포맷 설정 (중요!)
    std::cout << std::fixed;
    std::cout.precision(1);

    std::string str;
    if (!(std::cin >> str)) return 0;

    // 질문자님의 멋진 패턴 로직
    int maxLevel = static_cast<int>('A') + 4;
    double score = static_cast<double>(maxLevel - static_cast<int>(str[0]));

    if (score < 0)
    {
        score = 0.0;
    }
    else
    {
        if (str.length() > 1)
        {
            if (str[1] == '+')
                score += 0.3;
            else if (str[1] == '-')
                score -= 0.3;
            // '0'일 때는 점수 변동 없음
        }
    }

    std::cout << score << "\n";

    return 0;
}