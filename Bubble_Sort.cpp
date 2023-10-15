// bubble sorting

#include <iostream>
using namespace std;

int main(void)
{

    int size;
    cout << "Enter the size of the array : " << endl
         << " -> ";
    cin >> size;

    int arr[size];

    cout << endl
         << "Enter values in the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int count = 1;
    int temp;
    while (count < size - 1)
    {
        for (int i = 0; i < size - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }

    cout << endl
         << "Array after sorting : " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}