// AIM. Transpose a 4 X 4 matrix in C++

#include <iostream>

using namespace std;

int main()
{
    const int rows = 4;
    const int cols = 4;

    int mat[rows][cols];
    int result[cols][rows];

    cout << "Program to transpose a matrix:\n";

    // Input matrix
    cout << "Enter a " << rows << " X " << cols << " matrix:\n";
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

/*

Output:

Program to transpose a matrix:
Enter a 4 X 4 matrix:
Enter Element: [0][0]: 1
Enter Element: [0][1]: 2
Enter Element: [0][2]: 3
Enter Element: [0][3]: 4
Enter Element: [1][0]: 5
Enter Element: [1][1]: 6
Enter Element: [1][2]: 7
Enter Element: [1][3]: 8
Enter Element: [2][0]: 9
Enter Element: [2][1]: 10
Enter Element: [2][2]: 11
Enter Element: [2][3]: 12
Enter Element: [3][0]: 13
Enter Element: [3][1]: 14
Enter Element: [3][2]: 15
Enter Element: [3][3]: 16

The given matrix is:
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16

Transpose of the matrix is:
1       5       9       13
2       6       10      14
3       7       11      15
4       8       12      16

*/