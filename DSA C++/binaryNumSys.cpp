#include<iostream>
using namespace std;

// int decToBinary(int decNum){
//     int ans = 0, pow = 1;

//     while(decNum>0){
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }
//     return ans;  //binary form
// }

// int main(){
//     int decNum = 8;

//     for(int i=1; i<=8; i++){
//         cout<<decToBinary(i)<<endl;
//     }
//     return 0;
// }


// int binaryToDec(int binaryNum){
//     int ans = 0, pow = 1;

//     while(binaryNum>0){
//         int rem = binaryNum % 10;
//         ans += (rem * pow);

//         binaryNum /= 10;
//         pow *= 2;
//     }
//     return ans; //decimal form
// }

// int main(){
//     int binaryNum = 101; 

//     cout<<binaryToDec(binaryNum)<<endl;
//     return 0;
// }
// 1's compliment and 2's compliment conversion.


////////Bitwise operetor , Data type modifiers & more;

int main(){
    // int a=2, b=8;
    // cout<<(a & b)<<endl;
    // cout<<(a | b)<<endl;
    // cout<<(a ^ b)<<endl;
    cout<<(10 << 2)<<endl;   //for left shift by 2
    cout<<(10 >> 3)<<endl;   //for right shift by 3
    return 0;
}