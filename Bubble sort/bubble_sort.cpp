#include <iostream>
#include <climits>
using namespace std;

void bubblesort(int arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printarray(int arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[11] = { 1, 133 ,23 , 2, 3, 4, 5, 6, 7, 8, 9 };

    int sz = 11;

    bubblesort(arr, sz);
    printarray(arr, sz);
    return 0;
}