// AIM: C++ program to perform selection sort

#include <iostream>

using namespace std;

void selectionSort(int arr[], int size)
{
    int temp, minIndex;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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

    selectionSort(arr, size);

    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " \t";

    cout << endl;

    return 0;
}
