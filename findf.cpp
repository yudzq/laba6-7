#include "findf.h"
#include <iostream>

namespace SIIII
{
    int findFunc(int string, int column, int matrix[100][100])
    {
        int max = INT32_MIN, min = INT32_MAX, sum;

        for (int i = 0; i < string; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (matrix[i][j] > max)
                    max = matrix[i][j];
                if (matrix[i][j] < min)
                    min = matrix[i][j];
            }
        }

        return sum = max + min;
    }
}