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

    cout << "Program to find difference of two 4x4 matrices:\n";

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


/*
Output

Program to find difference of two 4x4 matrices:
Enter first matrix:
Enter Element: [0][0]: 10
Enter Element: [0][1]: 20
Enter Element: [0][2]: 30
Enter Element: [0][3]: 40
Enter Element: [1][0]: 50
Enter Element: [1][1]: 60
Enter Element: [1][2]: 70
Enter Element: [1][3]: 80
Enter Element: [2][0]: 90
Enter Element: [2][1]: 100
Enter Element: [2][2]: 110
Enter Element: [2][3]: 120
Enter Element: [3][0]: 130
Enter Element: [3][1]: 140
Enter Element: [3][2]: 150
Enter Element: [3][3]: 160

Enter second matrix:
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

Difference of the two matrices is:
9       18      27      36
45      54      63      72
81      90      99      108
117     126     135     144

*/