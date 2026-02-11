#include <iostream>
using namespace std;

void selectionsort(int arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < sz; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
          
        }
          swap(arr[smallest], arr[i]);
    }
}

void printarray(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {5, 3, 4, 1, 2};
    int sz = 5;

    selectionsort(arr, sz);
    printarray(arr, sz);
    return 0;
}
