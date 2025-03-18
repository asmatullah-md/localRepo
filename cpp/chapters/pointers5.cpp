#include<iostream>
using namespace std;
// int main(){
//     int x = 4;
//     int* p = &x;
//     cout<<&x<<endl;
//     cout<<p<<endl;
// }


void swap(int* a, int* b){          // pass by reference
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(&x, &y);
    cout<<x<<" "<<y<<endl;
}