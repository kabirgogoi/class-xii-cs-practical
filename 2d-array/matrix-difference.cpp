// AIM: To find the difference between two 4x4 arrays containing numeric values

#include <iostream>

using namespace std;

int main()
{
    const int rows = 4;
    const int cols = 4;

    int mat1[rows][cols];
    int mat2[rows][cols];
    int result[rows][cols];

    cout << "Program to find difference of two matrices:\n";

    cout << "Enter first matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter Element: [" << i << "][" << j << "]: ";
            cin >> mat1[i][j];
        }
    }

    cout << "\nEnter second matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter Element: [" << i << "][" << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    // Difference of matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    // Result
    cout << "\nDifference of the two matrices is:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << result[i][j] << "\t";
        }

        cout << "\n";
    }

    return 0;
}
