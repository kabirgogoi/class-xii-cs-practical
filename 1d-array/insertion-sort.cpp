// AIM: Write a C++ program to perform insertion sort

#include <iostream>

using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[50], size;

    cout << "Enter array size (Max 50): ";
    cin >> size;

    cout << "Enter array elements (unsorted): ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    insertionSort(arr, size);

    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " \t";

    return 0;
}


/*
Output

Enter array size (Max 50): 5
Enter array elements (unsorted): 100
10
30
1
55
Sorted array:
1       10      30      55      100
*/