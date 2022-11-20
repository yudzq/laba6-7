#include "readf.h"
#include <iostream>

namespace SIIII
{
    void inputMatrix(int matrix[100][100], int n, int n1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                std::cin >> matrix[i][j];
            }
        }
    }
}
