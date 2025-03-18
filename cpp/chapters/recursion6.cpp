#include<iostream>
using namespace std;                       
                            // Recursion means Function calling itself
                            // Repitation & Infinite Loop
// void print(int n){
//     if(n==0) return;        // Base Case
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     print(5);
// }


// int sum(int n){
//     if(n==1) return 1;       // Base Case
//     return n + sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<sum(n);
// }


// int fact(int n){
//     if(n==0 || n==1) return 1;       // Base Case
//     return n * fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<fact(n);
// }


// int power(int a, int b){
//     if(b==0) return 1;       // Base Case
//     return a * power(a, b-1);
// }
// int main(){
//     int a;
//     cout<<"Enter base: ";
//     cin>>a;
//     int b;
//     cout<<"Enter power: ";
//     cin>>b;
//     cout<<power(a, b);
// }


int fibo(int n){                         // fibonacci series
        if(n==1 || n==2) return 1;       // Base Case
        return fibo(n-1) + fibo(n-2);
    }
    int main(){
        int n;
        cout<<"Enter n: ";
        cin>>n;
        cout<<fibo(n);
    }