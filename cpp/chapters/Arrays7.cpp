#include<iostream>
using namespace std;
// int main(){
//     int arr[] = {5,64,8,20,-62,24};
//     int n = sizeof(arr)/4;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     cout<<sum;
// }


// int main(){
//     int arr[] = {5,64,8,20,-62,24};
//     int n = sizeof(arr)/4;
//     int mx = arr[0];
//     for(int i=1; i<n; i++){
//         // if(arr[i]>mx) {
//         // mx = arr[i];
//         // }
//         mx = max(mx,arr[i]);
//     }
//     cout<<mx;
// }


// int main(){
//     int arr[5] = {2,5,8,7,9};
//     for(int i=0; i<=4; i++){
//     cout<<" "<<arr[i];
//     } cout<<endl;

//     for(int i=0; i<=4; i++){
//         if(i%2 != 0){
//             arr[i] *= 2;
//             cout<<" "<<arr[i];
//         }
//         else{
//             arr[i] += 10;
//             cout<<" "<<arr[i];
//         }
//    }
// }


// int main(){
//     int arr[] = {12,5,8,7,1,-7,11,54};
//     int n = sizeof(arr)/4;
//     for(int i=0; i<=n; i++){
//     cout<<" "<<arr[i];
//     } cout<<endl;

//     int x = 5;
//     int count = 0;
//     for(int i=0; i<=n; i++){
//     if(arr[i] >x){
//         count++;
//         }
//     }
//     cout<<count;
// }


// int main(){
//     int arr[] = {5,64,8,20,-62,24};
//     int n = sizeof(arr)/4;
//     int sumE = 0;
//     for(int i=0; i<n; i++){
//         if(i%2 == 0){
//         sumE += arr[i];
//         cout<<sumE<<" ";
//         }
//     }
//     cout<<endl;
//     int sumO= 0;
//     for(int i=0; i<n; i++){
//         if(i%2 != 0){
//         sumO += arr[i];
//         cout<<sumO<<" ";
//         }
//     }
//     cout<<endl;
//     cout<<"sumE-sumO: "<<sumE-sumO;
// }


// int main(){
//     int a[] = {5,64,8,20,-62,24};
//     int n = sizeof(a)/4;
//     for(int i=0; i<=n; i++){
//         cout<<a[i]<<" ";
//     } cout<<endl;
//     int b[n];
//     for(int i=0; i<n; i++){
//         int j = n-1-i;       // i+j = n-1
//         b[i] = a[j];
//     }
//     for(int i=0; i<n; i++){
//         cout<<b[i]<<" ";
//     }
// }


int main(){          //print elements are palindrome or not
    int arr[] = {1,2,3,4,3,2,1};
    int n = sizeof(arr)/4;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        i=j;
        break;
        cout<<"palindrome";
    }
}