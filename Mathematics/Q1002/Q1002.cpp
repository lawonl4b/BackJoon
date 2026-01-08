/*
[백준 1002번] AxB
- 난이도: Bronze V
- 분류: 구현, 사칙연산
- 걸린 시간: 1분
- 메모리: 2020 KB / 시간: 0 ms

풀이 방법:
- 두 정수를 입력받아 곱한 값을 출력하는 기본 입출력 문제
*/
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // C와 동기화 끊기
    cin.tie(NULL);                    // cin과 cout 묶음 해제

    int a = 0;
    int b = 0;

    cin >> a >> b;
    cout << a * b;

    return 0;
}