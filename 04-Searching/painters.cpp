#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Check if it is possible to paint with given max time
bool isPossible(vector<int> &arr, int n, int m, int maxtime) {

    int painters = 1;
    int time = 0;

    for (int i = 0; i < n; i++) {

        if (time + arr[i] <= maxtime) {
            time += arr[i];
        }
        else {
            painters++;
            time = arr[i];

            if (painters > m) {
                return false;
            }
        }
    }

    return true;
}


// Find minimum time
int mintimetopaint(vector<int>& arr, int n, int m) {

    int sum = 0;
    int maxval = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxval = max(maxval, arr[i]);
    }

    int st = maxval;
    int end = sum;
    int ans = -1;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }

    return ans;
}


int main() {

    vector<int> arr = {40, 30, 20, 10};
    int n = 4, m = 2;

    cout << mintimetopaint(arr, n, m) << endl;

    return 0;
}
