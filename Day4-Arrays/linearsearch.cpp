#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr) / sizeof(int);

    int target = 4;
int index = -1;
    for (int i = 0; i < sz; i++)
    {

        if (arr[i] == target)
        {
            cout << "found";
             index = i;
        }
    }
      if (index != -1)
        cout << "Found at index " << index;
    else
        cout << "Not Found";

    return 0;
}