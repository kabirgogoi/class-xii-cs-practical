// AIM: To delete an element from an array

#include <iostream>
#include <process.h>

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
    int arr[50], item, n, index;

    cout << "Enter array size (Max. 50): ";
    cin >> n;

    cout << "\nEnter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        cout << "\nEnter the element to be deleted: ";
        cin >> item;

        if (n == 0)
        {
            cout << "\nUnderflow! No elements left to delete.\n";
            exit(1);
        }

        index = linearSearch(arr, n, item);

        if (index != -1)
            arr[index] = 0;
        else
            cout << "\n Sorry!No such element is found \n";

        cout << "The array is now as is shown bellow \n";
        cout << "Zero (0) signifies deleted element \n";

        for (int i = 0; i < n; i++)
            cout << arr[i] << "\t";

        cout << endl;
        cout << "\nAfter this emptied space will be shifted to the end of the array \n";

        for (int i = index; i < n; i++)
            arr[i] = arr[i + 1];

        n = n - 1;

        cout << "\nWant to delete more elements(y/n):\t";
        cin >> ch;
    }

    cout << "\nThe array after shifting emptied spaces towards the right is: \n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";

    cout << endl;

    return 0;
}
