#include <iostream>
#include<vector>
using namespace std;

// void printDigit(int n){
//     while(n != 0){
//         int digit = n%10;
//         cout << digit <<endl;

//         n = n/10;
//     }
// }

// int main(){
//     int n = 2154;

//     printDigit(n);
//     return 0;
// }



// bool isArmstrong(int n){
//     int copyN = n;
//     int sumOfCubes = 0;

//     while(n != 0){
//         int dig = n%10;
//         sumOfCubes += (dig*dig*dig);

//         n = n/10;
//     }
//     return sumOfCubes == copyN;
// }

// int main(){
//     int n= 153;

//     if(isArmstrong(n)){
//         cout <<"is an armstrong number\n"<<endl;
//     }else{
//         cout <<"is not armstrong number\n"<<endl;
//     }
//     return 0;
// }


//Euclid's Algoritms 
int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a == 0) return b;
    return a;
}

int gcdRec(int a, int b){
    if(b == 0) return a;

    return gcdRec(b, a%b);
}

int main(){
    cout << gcd(20, 24)<<endl;
    cout << gcdRec(20, 21)<<endl;
    return 0;
}