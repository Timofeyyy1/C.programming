#include <stdlib.h>

// Создаем функцию в динамической памяти
double* MatrixOper(double* matrix1, double* matrix2, int n, char operation){
    double* result = malloc(n * n * sizeof(double));

    // Вычисляем операцию в зависимости от знака 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int index = i * n + j;
            if (operation == '+')
            {
                result[index] = matrix1[i] + matrix2[i];
            }
            else if (operation == '-')
            {
                result[index] = matrix1[i] - matrix2[i];
            }
            if (operation == '*')
            {
                for(int k = 0; k < n; k++)
                {
                    result[index] += matrix1[i * n + k] * matrix2[k * n + j];
                } 
            }
        }
    }
   
   return result;
}
