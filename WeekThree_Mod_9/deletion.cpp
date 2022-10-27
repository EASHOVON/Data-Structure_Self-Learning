#include <bits/stdc++.h>
using namespace std;
// Array Printing Function
void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int array[50], size, pos, value;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Given Array: ";
    printArray(array, size);
    cout << "Enter position: ";
    cin >> pos;
    if (pos < 0 || pos > size - 1)
    {
        cout << "Invalid Index" << endl;
    }

    if (pos == size - 1)
        size--;
    else
    {
        for (int i = pos + 1; i < size; i++)
        {
            array[i - 1] = array[i];
        }
        size--;
    }

    cout << "After Deleting: ";
    printArray(array, size);

    return 0;
}