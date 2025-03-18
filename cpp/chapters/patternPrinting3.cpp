#include<iostream>
using namespace std;
// int main(){
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int c;
//     cout<<"Enter c: ";
//     cin>>c;
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=c; j++){
//             cout<<(char)(j+96)<<" ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     for(int i=1; i<=r; i++){
//         //for(int j=1; j<=i; j++){
//         for(int j=1; j<=r+1-i; j++){
//             if(i%2 != 0) cout<<j<<" ";
//             else cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int a=1;
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             cout<<a++<<" ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             if((i+j)%2==0) cout<<1<<" ";
//             else cout<<0<<" ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int mid=r/2 + 1;
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=r; j++){
//             if(i == mid || j == mid) cout<<"* ";
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }
// }


int main(){
        int r;
        cout<<"Enter r: ";
        cin>>r;
        for(int i=1; i<=r; i++){
            for(int j=1; j<=r; j++){
                if(i=j || i+j == r+1){
                    if(r%2 == 0) cout<<" please enter odd no. : ";
                    cout<<"* ";
                }
                else cout<<"# ";
            }
            cout<<endl;
        }
    }