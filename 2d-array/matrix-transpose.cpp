// AIM. To interchange row and column elements in a two-dimensional array using C++

#include <iostream>

using namespace std;

int main()
{
    const int rows = 2;
    const int cols = 2;

    int mat[rows][cols];
    int result[cols][rows];

    cout << "Program to transpose a matrix:\n";

    // Input matrix
    cout << "Enter the matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter Element: [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    // Show the original matrix
    cout << "\nThe given matrix is:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }

    // Transpose of matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = mat[i][j]; // Rows and cols are swapped for transpose
        }
    }

    // Result
    cout << "\nTranspose of the matrix is:\n";
    for (int i = 0; i < cols; i++) // Iterate over cols first for transposed result
    {
        for (int j = 0; j < rows; j++)
        {
            cout << result[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
