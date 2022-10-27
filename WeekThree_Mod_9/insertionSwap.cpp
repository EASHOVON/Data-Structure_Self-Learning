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
    cout << "Enter Value: ";
    cin >> value;

    // Insertion Starting with swaping method
    for (int i = size - 1; i >= pos; i--)
    {
        /* code */
        array[i + 1] = array[i];
    }
    array[pos] = value;

    cout << "After inserting: ";
    printArray(array, size + 1);

    return 0;
}