#include <iostream>
using namespace std;


void insertionsort(int arr[], int sz){
   
    for(int i=1; i < sz; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev>= 0 && arr[prev]>curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
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

    insertionsort(arr, sz);
    printarray(arr, sz);
    return 0;
}
