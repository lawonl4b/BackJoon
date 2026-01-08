/*
[백준 1008번] A/B
- 난이도: Bronze V
- 분류: 구현, 사칙연산
- 걸린 시간: 1분
- 메모리: 2020 KB / 시간: 0 ms

풀이 방법:
- 두 정수를 입력받아 나눈 값을 출력하는 기본 입출력 문제
*/
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. double로 변경 (10^-9 정밀도 확보)
    double a, b;

    cin >> a >> b;

    // 2. 출력 정밀도 설정
    cout.precision(12); // 소수점 자릿수를 충분히 확보 (최소 9자리 이상)
    cout << fixed;      // 소수점 아래 자릿수만 고정해서 출력하겠다는 의미

    cout << a / b;

    return 0;
}