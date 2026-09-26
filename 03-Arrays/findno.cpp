#include <iostream>
#include <climits>
using namespace std;

int main()
{
    
  int arr[10]={11,2,3,4,5,6,7,8,9,4};

  int sz = sizeof(arr)/sizeof(int);
  
  int smallest = INT_MAX;
  int largest = INT_MIN;

  for(int i=0; i < sz; i++){
      
    if (arr[i]<smallest)
    {
        smallest = arr[i];
    }
    if (arr[i]>largest)
    {
        largest = arr[i];
    }
    
    
  }
  cout << "Smallest element = " << smallest << endl;
 cout << "largest element = " << largest << endl;
    return 0;
}