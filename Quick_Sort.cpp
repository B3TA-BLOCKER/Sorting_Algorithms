/*
    Quick Sort :
        Quick Sort is one of the sorting Algorithm which is based on
        divide and conquer Algorithm.
*/

#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;

            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}
void quick_sort(int arr[], int l, int r)
{
    if (l < r)
    {

        int pi = partition(arr, l, r);
        quick_sort(arr, l, pi - 1);
        quick_sort(arr, pi + 1, r);
    }
}

int main(void)
{
    int arr[] = {5, 4, 3, 2, 1, 0};
    quick_sort(arr, 0, 5);

    // Displaying the result

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
}