// AIM: C++ program to perform binary search in an array

#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int first = 0;
    int last = size - 1;
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            first = mid + 1;
        else
            last = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[50], size, target;

    cout << "Enter array size (Max 50): ";
    cin >> size;

    cout << "Enter array elements (must be sorted in ASC order): ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter element to be searched: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;

    return 0;
}
