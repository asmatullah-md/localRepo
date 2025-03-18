#include<iostream>
#include<cmath>
using namespace std;
// int main(){
//     cout<<sqrt(5)<<endl;
//     cout<<cbrt(3)<<endl;
//     cout<<pow(2,10);
//     cout<<max(4, 9);
// }


// int fact(int x){
//     int f = 1;
//     for(int i=1; i<=x; i++){
//         f*=i;
//     }
//     return f;
// }
// int main(){                           // use combination nCr
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;

//     // int a = 1;
//     // for(int i=1; i<=n; i++){
//     //     a*=i;
//     // }
//     // int b = 1;
//     // for(int i=1; i<=r; i++){
//     //     b*=i;
//     // }
//     // int c = 1;
//     // for(int i=1; i<=n-r; i++){
//     //     c*=i;
//     // }

//     int a = fact(n);
//     int b = fact(r);
//     int c = fact(n-r);
//     cout<<a/(b*c);
// }


// int fact(int x){
//     int f = 1;
//     for(int i=1; i<=x; i++){
//         f*=i;
//     }
//     return f;
// }
// int main(){                           // use permutation nPr
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;

//     int a = fact(n);
//     int b = fact(n-r);
//     cout<<a/(b);
// }


// int fact(int x){                   // pascal triangle
//         int f = 1;
//         for(int i=1; i<=x; i++){
//             f*=i;
//         }
//         return f;
// }

// int nCr(int n, int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }

// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;
//     for(int i=0; i<=num; i++){
//         for(int j=0; j<=num-i; j++){
//             cout<<"  ";
//         }
//         for(int j=0; j<=i; j++){
//             cout<<nCr(i, j)<<"   ";
//         }
//         cout<<endl;
//     }
// }


// void swap(int& x, int& y){          // pass by reference
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
//     int x = 12;
//     int y = 45;
//     cout<<x<<" "<<y<<endl;
//     swap(x, y);
//     cout<<x<<" "<<y<<endl;
// }


int maxOfTwo(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    cout<<maxOfTwo(10,6);
}