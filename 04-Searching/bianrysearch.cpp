#include <iostream>
using namespace std;


int main()
{
    int arr[5] = { 3, 4, 9, 1, 2};
    int n = 5;
      //mountainarray(arr , n);
        int st = 1; 
        int end = n-1;
    while(st <= end){ 
         int mid = st + (end - st) / 2;
         if(arr[mid-1]<arr[mid] && arr[mid]> arr[mid+1]){
            return mid ;
         } else if(arr[mid-1] < arr[mid]){
             st = mid + 1;
         }else{
            end = mid -1;
         }
    }

}
