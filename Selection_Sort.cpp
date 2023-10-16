/*
    In Selection sort we have to Find the minimum element in
    an unsorted array and swap it with element at begining,

*/

#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the Size of the array : " << endl
         << " -> ";
    cin >> n;

    // Array Declaration of size 'n'
    int arr[n];
    int temp;

    /*
        Taking the input of the values in the array
    */
    cout << endl
         << "Enter the values of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // Displaying Final Result
    cout << endl
         << "After Sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}