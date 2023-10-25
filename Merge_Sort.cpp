#include <iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
    int size_1 = mid - l + 1;
    int size_2 = r - mid;

    // declaring two temp Arrays
    int arr_1[size_1];
    int arr_2[size_2];

    for (int i = 0; i < size_1; i++)
    {
        arr_1[i] = arr[l + i]; // because the starting point in the array is 'l';
    }

    for (int i = 0; i < size_1; i++)
    {
        arr_2[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l; // it will triverse the main array

    while (i < size_1 && j < size_2)
    {
        if (arr_1[i] < arr_2[j])
        {
            arr[k] = arr_1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr_2[j];
            k++;
            j++;
        }
    }

    while (i < size_1)
    {
        arr[k] = arr_1[i];
        k++;
        i++;
    }

    while (j < size_2)
    {
        arr[k] = arr_2[j];
        k++;
        j++;
    }
}
void Merge_Sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;

        Merge_Sort(arr, l, mid);
        Merge_Sort(arr, mid + 1, r);

        Merge(arr, l, mid, r);
    }
}

int main(void)
{
    int arr[]= {5,4,3,2,1};
    Merge_Sort(arr,0,4);

    // Displaying the result

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}