// AIM: A C++ program to perform linear search

#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[50], size, target;

    cout << "Enter array size (Max 50): ";
    cin >> size;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter element to be searched: ";
    cin >> target;

    int result = linearSearch(arr, size, target);

    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;

    return 0;
}
