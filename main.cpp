
#include <iostream>
#include "readf.h"
#include "outf.h"
#include "sortf.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int matrix[100][100];
    int n;
    int n1;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> n1;
    cout << "Введите элементы матрицы: \n";
    SIIII::inputMatrix(matrix,n,n1);
    if (SIII::countOfMaxNumberCheck(matrix,n,n1) == 2)
        SIII::sort(matrix, n, n1);

    cout << "Новая матрица: \n";
    SII::outputMatrix(matrix,n,n1);
}


