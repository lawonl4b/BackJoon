/*
[백준 2738번] 행렬 덧셈
- 난이도: Bronze Ⅲ
- 분류: 수학, 구현, 사칙연산
- 언어: C++(17)
- 메모리: 2152 KB
- 시간: 0 ms
*/
#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

void insertMatrix(Matrix &mat, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = 0;
            std::cin >> temp;
            mat[i][j] += temp;
        }
    }
}

void printMatrix(const Matrix &a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    std::cin >> n >> m;

    Matrix matrixA(n, std::vector<int>(m));

    insertMatrix(matrixA, n, m);
    insertMatrix(matrixA, n, m);
    printMatrix(matrixA, n, m);

    return 0;
}