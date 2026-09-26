#include <iostream>
using namespace std;

void bubblesort(int arr[], int sz)
{
    for (int i = 0; i < sz-1 ; i++)
    {
        bool isswap = false;
        for (int j = 0; j < sz-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
        }
        if (!isswap)
        {
            cout << "Already sorted" << endl;
            return;
        }
        
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

    int arr[4] = { 1, 2, 3, 4 };

    int sz = 4;

    bubblesort(arr, sz);
    printarray(arr, sz);
    return 0;
}