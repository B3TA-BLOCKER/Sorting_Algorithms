/*
    INSERTION SORTING :-
            Insert an element from an unsorted array to its correct position
            in sorted array.

*/
#include <iostream>
using namespace std;

int main(void)
{
    int size;

    cout << "Enter the size of the array : " << endl
         << " -> ";
    cin >> size;

    int arr[size];

    cout << "Enter the values in the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Declaring a variable in which we will be storing the values of the array.
    int current;
    // we will start our loop from index#1;
    for (int i = 1; i < size; i++)
    {
        current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            // we are just moving(incrementing) the position(index) of the value in the array
            arr[j + 1] = arr[j];
            j--;
        }
        // At the end of the loop we will get the postion where we need to put our current value
        arr[j + 1] = current; // beacause of the line 33 we have to write [j+1]
    }

    // Printing the array
    cout << "After sorting : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}