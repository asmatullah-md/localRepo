#include<iostream>
using namespace std;
// int main(){
//     // for(int i=1; i<=100; i++){
//     //     if(i%2 != 0) cout<<i<<" ";
//     // }

//     for(int i=2; i<=100; i+=2){
//         cout<<i<<" ";
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=n; i<=10*n; i+=n){
//         cout<<i<<" ";
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1; i<=2*n-1; i+=2) cout<<i<<" ";
// }


// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int f = 1;  //store karunga highest factor  
//     for(int i=1; i<=n/2; i++){
//         if(n%i==0) f = i;
//     }
//     cout<<f;
// }


// int main(){
//     int n;
//     cout<<"Enter no.: ";
//     cin>>n;
//     bool flag = true; // true means prime
//     for(int i=2; i<=n/2; i++){
//         if(n%i==0){
//             flag = false; // false means composite
//         break;
//         }
//     }
//     if(n==1) cout<<"Niether prime Nor Composite";
//     else if(flag==true) cout<<"prime";
//     else cout<<"Composite";
// }


// int main(){
//     int x=4, y=0;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y) continue;
//         else cout<<x<<" "<<y<<endl;
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter n.: ";
//     cin>>n;
//     int count = 0;
//     while(n!=0){
//         n = n/10;
//         count++;
//     }
//     cout<<count;
// }


// int main(){
//         int n;
//         cout<<"Enter n.: ";
//         cin>>n;
//         int sum = 0;
//         while(n!=0){
//             int lastDigit = n%10;
//             n = n/10;
//             sum += lastDigit;
//         }
//         cout<<sum;
//     }


// int main(){
//     int n;
//     cout<<"Enter n.: ";
//     cin>>n;
//     int product = 1;
//     while(n!=0){
//         int lastDigit = n%10;
//         n = n/10;
//         product *= lastDigit;
//     }
//     cout<<product;
// }


int main(){
    int n;
    cout<<"Enter n.: ";
    cin>>n;
    int rev = 0;
    while(n!=0){
        int lastDigit = n%10;
        rev *= 10;
        rev += lastDigit;
        n = n/10;
    }
    cout<<rev;
}