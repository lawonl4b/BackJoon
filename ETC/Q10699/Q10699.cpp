/*
[백준 10699번] 오늘 날짜
- 난이도: Bronze V
- 분류: 구현
*/
#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{
    time_t now = time(NULL);
    // 한국 시간(KST)은 UTC보다 9시간 빠르므로, 9시간(9 * 60분 * 60초)을 더해줍니다.
    now += 9 * 60 * 60;
    
    struct tm *t = localtime(&now);

    std::cout << std::put_time(t, "%Y-%m-%d") << std::endl;
    return 0;
}