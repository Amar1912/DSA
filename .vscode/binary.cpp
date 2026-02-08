// Binary Search :- O(logn)

#include <iostream>
#include <vector>

using namespace std;

int binarysearch(vector<int> arr1, int tar1)
{
    int st = 0, end = arr1.size() - 1;

    while (st <= end)
    {

        // int mid = (st+end)/2;

        int mid = st + (end - st) / 2;

        if (tar1 > arr1[mid])
        {
            st = mid + 1;
        }
        else if (tar1 < arr1[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{

    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    int tar1 = 12;

    cout << binarysearch(arr1, tar1) << endl;

    return 0;
}
