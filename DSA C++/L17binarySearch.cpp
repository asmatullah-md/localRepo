#include <iostream>
#include<vector>
//#include<climits>
#include<algorithm>
using namespace std;

// int binarySearch(vector<int> arr, int tar){
//     int st=0, end=arr.size()-1;

//     while(st <= end){
//         int mid = (st+end)/2;

//         if(tar > arr[mid]){
//             st = mid+1;
//         }else if(tar < arr[mid]){
//             end = mid-1;
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int recBinarySearch(vector<int> arr, int tar, int st, int end){
//     if(st <= end){
//         int mid = st + (st-end)/2;

//         if(tar > arr[mid]){  // 2nd half
//             return recBinarySearch(arr, tar, mid+1, end);
//         }else if(tar < arr[mid]){   // 1st half
//             return recBinarySearch(arr, tar, st, mid-1);
//         }else{   //mid => ans
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     // vector<int> arr1 = {-1, 0, 3, 5, 9, 12};
//     // int tar1 = 9;
//     // cout << binarySearch(arr1, tar1) <<endl;

//     vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
//     int tar2 = 20;
//     cout << binarySearch(arr2, tar2) <<endl;

//     return 0;
// }




// bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){   //O(n)
//     int stu = 1, pages = 0;

//     for(int i=0; i<n; i++){
//         if(arr[i] > maxAllowedPages){
//             return false;
//         }
        
//         if(pages + arr[i] <= maxAllowedPages){
//             pages += arr[i];
//         }else{
//             stu++;
//             pages = arr[i];
//         }
//     }
//     return stu > m ? false : true;
// }

// int allocateBooks1(vector<int> &arr, int n, int m){   //O(logN*n)
//     if(m>n){
//         return -1;
//     }

//     int sum = 0;
//     for(int i=0; i<n; i++){  // O(n)
//         sum += arr[i];
//     }

//     int ans = -1;
//     int st = 0, end = sum;  //range(N) of possible answer

//     while(st <= end){
//         int mid = st +(end-st)/2;

//         if(isValid(arr, n, m, mid)){  //left
//             ans = mid;
//             end = mid-1;
//         }else{ //right
//             st = mid+1;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> arr = {2, 1, 3, 4};
//     int n = 4, m = 2;

//     cout<<allocateBooks1(arr, n, m)<<endl;
//     return 0;
//}

// // Q.  arr = {15, 17, 20}  ,  N=3,  M=2

bool isValid(vector<int> &arr, int N, int M, int maxAllowedPages){
    int stu = 1, pages = 0;

    for(int i=0; i<N; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
        
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            stu++;
            pages = arr[i];
        }
    }
    return stu > M ? false : true;
}

int allocateBooks2(vector<int> &arr, int N, int M){
    if(M>N){
        return -1;
    }

    int sum = 0;
    for(int i=0; i<N; i++){
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;

    while(st <= end){
        int mid = st + (end-st)/2;

        if(isValid(arr, N, M, mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;
} 

int main(){
    int N =3 , C =2 ;
    vector<int> arr = {15, 17, 20};

    cout<<allocateBooks2(arr, N, C)<<endl;
    return 0;
}


// bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){   //O(n)
//     int painter = 1, timeUnit = 0;

//     for(int i=0; i<n; i++){
        
//         if(timeUnit + arr[i] <= maxAllowedTime){
//             timeUnit += arr[i];
//         }else{
//             painter++;
//             timeUnit = arr[i];
//         }
//     }
//     return painter <= m ? true : false;
// }

// int minTimeToPaint(vector<int> &arr, int n, int m){   //O(logN*n)

//     int sum = 0, maxVal = INT_MIN;
//     for(int i=0; i<n; i++){  // O(n)
//         sum += arr[i];
//         maxVal = max(maxVal, arr[i]);
//     }

//     int ans = -1;
//     int st = maxVal, end = sum;  //range(N) of possible answer

//     while(st <= end){
//         int mid = st +(end-st)/2;

//         if(isPossible(arr, n, m, mid)){  //left
//             ans = mid;
//             end = mid-1;
//         }else{ //right
//             st = mid+1;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> arr = {40, 30, 10, 20};
//     int n = 4, m = 2;

//     cout<<minTimeToPaint(arr, n, m)<<endl;
//     return 0;
// }




// bool isPossible(vector<int> &arr, int N, int C, int minAllowedDistance){   //O(n)
//     int cows = 1, lastStallPosi = arr[0];

//     for(int i=1; i<N; i++){
        
//         if(arr[i] - lastStallPosi >= minAllowedDistance){
//             cows++;
//             lastStallPosi = arr[i];
//         }
//         if(cows == C){
//             return true;
//         }
//     }
//     return false;
// }

// int getDistance(vector<int> &arr, int N, int C){   //O(logN*n)
//     sort(arr.begin(), arr.end());  //nlogn

//     int ans = -1;
//     int st = 1, end = arr[N-1] - arr[0];  // (end = maxVal - minVal) range(N) of possible answer

//     while(st <= end){
//         int mid = st +(end-st)/2;

//         if(isPossible(arr, N, C, mid)){  //right
//             ans = mid;
//             st = mid+1;
//         }else{ //left
//             end = mid-1;
//         }
//     }
//     return ans;
// }

// int main(){
//     int N = 5, C = 3;
//     vector<int> arr = {1, 2, 8, 4, 9};

//     cout<<getDistance(arr, N, C)<<endl;
//     return 0;
// }
