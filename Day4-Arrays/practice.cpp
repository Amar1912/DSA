#include <iostream>
using namespace std;

int main() {
    int marks[5] = {23, 45, 56, 89, 67};

    // Calculate size
    int size = sizeof(marks) / sizeof(int);

    // Taking new input for the array
    cout << "Enter " << size << " new marks below:" << endl; 
    
    for(int i = 0; i < size; i++) {
        cout << "Enter mark for index " << i << ": "; // This tells you what to do!
        cin >> marks[i];   
    }

    cout << "\n--- Updated Marks ---" << endl;
    // Printing updated array
    for(int i = 0; i < size; i++) {
        cout << "Index " << i << ": " << marks[i] << endl;
    }

    return 0;
}