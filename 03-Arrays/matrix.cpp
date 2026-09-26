#include <iostream>
#include <climits>
using namespace std;

int maxsum(int matrix[4][3], int row, int cols){
    int maxrowsum = INT_MIN;
    for(int i = 0; i < row; i++){
        int rowsum = 0;
        for( int j = 0; j < cols; j++){
           rowsum += matrix[i][j];
        }
       maxrowsum = max(maxrowsum, rowsum);

    }
    return maxrowsum;
}

int main(){
    
    //int matrix[4][3];
    int matrix[4][3] ={{1,2,3},{2,3,4},{3,5,5},{1,2,3}};
    int row = 4;
    int cols = 3;

    //cout<< matrix[2][1];

    //loops for matrix
    //cin
    for(int i = 0; i < row; i++){
    
        for( int j = 0; j < cols; j++){
            cin>> matrix[i][j];
        }
        cout<<endl;
    }

  //cout
    for(int i = 0; i < row; i++){
    
        for( int j = 0; j < cols; j++){
            cout<< matrix[i][j];
        }
        cout<<endl;
    }

    //linear search
     int key = 4;

     for(int i = 0; i < row; i++){
    
        for( int j = 0; j < cols; j++){
            if(matrix[i][j] == key){
                cout<<"Element found at index: "<<i<<" "<<j<<endl;
            }
            
        }
        cout<<endl;
    }
    cout<< maxsum(matrix, row, cols);

    return 0;
}