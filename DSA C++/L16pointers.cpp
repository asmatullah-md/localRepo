#include <iostream>
#include<vector>
using namespace std;

int main(){
    // int a = 10;
    // int *ptr = &a;

    // cout << *(&a) <<endl;   // Dereference operator
    // cout <<ptr <<endl;
    // cout <<&a <<endl;


    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *(ptr+1) <<endl;
    cout << *(ptr+3) <<endl;
    ptr++;
    cout << *ptr <<endl;
    return 0;
}