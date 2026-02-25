//Given an array of integers, find the second largest element in the array.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;

    int largest = -1e9;
    int secondLargest = -1e9;

    for(int i = 0; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -1e9)
        cout << "No Second Largest Element";
    else
        cout << "Second Largest = " << secondLargest;

    return 0;
}
