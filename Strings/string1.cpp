#include <iostream>
#include <cstring>

using namespace std;

int main(){
     
    char str[] = {'a','b','\0'};
    char str2[] = "helo";
    cout << str <<endl;
    cout << strlen(str)<<endl;

    cout<< str2[2];


    return 0;
}