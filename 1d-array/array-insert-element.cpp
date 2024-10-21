// AIM: C++ program to insert an element at a given index in an array

#include <iostream>
#include <process.h>

using namespace std;

int main()
{
    int arr[50], item, n = 0, index;

    cout << "Enter array size (Max. 50): ";
    cin >> n;

    // Validate array size
    if (n > 50 || n <= 0)
    {
        cout << "Invalid size! Please enter a size between 1 and 50.\n";
        exit(1);
    }

    cout << "\nEnter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        if (n == 50)
        {
            cout << "Overflow! Cannot insert more elements.\n";
            exit(1);
        }

        cout << "\nEnter element to be inserted: ";
        cin >> item;

        cout << "Enter the desired index for the element (0 to " << n << "): ";
        cin >> index;

        // Validate the index
        if (index < 0 || index > n)
        {
            cout << "Invalid index. Please enter a valid index.\n";
            continue; // Restart the loop
        }

        // Shift elements to the right to make space for the new element
        for (int i = n; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }

        // Insert the new element
        arr[index] = item;
        n = n + 1; // Increase the array size

        cout << "\nDo you want to insert more elements? (y/n): ";
        cin >> ch;
    }

    // Display the final array
    cout << "\nThe array is as shown below:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}

/*
Output


Enter array size (Max. 50): 5

Enter array elements:
10
20
30
40
50

Enter element to be inserted: 60
Enter the desired index for the element (0 to 5): 4

Do you want to insert more elements? (y/n): y

Enter element to be inserted: 100
Enter the desired index for the element (0 to 6): 3

Do you want to insert more elements? (y/n): n

The array is as shown below:
10      20      30      100     40      60      50

*/