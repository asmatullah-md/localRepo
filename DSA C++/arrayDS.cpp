#include <iostream>
using namespace std;

#include<climits>
// int main(){
//     int nums[] = {5, 15, 22, 1, -14, 24};
//     int size = 6;

//     int largest = INT_MIN;
//     int smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//         largest = max(nums[i], largest);
//         smallest = min(nums[i], smallest);
//     }
//     cout << "largest = "<< largest << endl;
//     // for(int i=0; i<size; i++){
//     //     if(nums[i] < smallest){    [OR]  smallest = min(num[i], smallest);
//     //         smallest = nums[i];
//     //     }
//     // }
//     cout << "smallest = "<< smallest << endl;
//     return 0;
// }



// //linear search

// int linearSearch(int arr[], int size, int target){
//     for(int i=0; i<size; i++){
//         if(arr[i] == target){   //found
//             return i;
//         }
//     }
//     return -1;   //not found
// }

// void reverseArray(int arr[], int size){
//     int start =0, end = size-1;

//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int size = 7;
//     // int target = 8;

//     // cout<< linearSearch(arr, size, target)<<endl;

//     reverseArray(arr, size);

//     for(int i=0; i<size; i++){
//         cout<< arr[i]<<" ";
//     }
//     cout<< endl;
//     return 0;
// }



// int sumProdOfArray(int arr[], int size){
//     //int sum = 0;
//     int product = 1;
//     for(int i=0; i<size; i++){
//         //sum += arr[i];
//         product *= arr[i];
//     }
//     //return sum;
//     return product;
// }

// int main(){
//     int arr[] = {2, 8, 54, 12, 9};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int totalSum = sumProdOfArray(arr, size);
//     cout<<"sum of array of elements = "<<totalSum<<endl;
//     return 0;
// }



// int swapMaxMin(int arr[], int size){

//     int largest = INT_MIN, smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//         largest = max(arr[i], largest);
//         smallest = min(arr[i], smallest);
//     }
//     cout << "largest = "<< largest << endl;
//     cout << "smallest = "<< smallest << endl;

//     swap(arr[largest], arr[smallest]);
// }

// int main(){
//     int arr[] = {5, 15, 22, 1, -14, 24};
//     int size = sizeof(arr)/sizeof(arr[0]);
    
//     cout<<"original array: ";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     swapMaxMin(arr,size);
//     cout<<"swapping element of an array: ";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



// int uniqueValue(int arr[], int size){
//     for(int i=0; i<size; i++){
//         bool isUnique = true;

//         for(int j=0; j<size; j++){
//             if(i != j && arr[i] == arr[j]){
//                 isUnique = false;
//             } 
//         }
//         if(isUnique){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[] = {1, 2, 5, 2, 7, 8, 7, 1};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     cout<<"original array: ";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     uniqueValue(arr, size);
//     return 0;
// }



void intersectionOfTwoArray(int Arr[], int Size, int arr[], int size){
    for(int i=0; i<Size; i++){
        bool isCommon = false;

        for(int j=0; j<size; j++){
            if(Arr[i] == arr[j]){
            isCommon = true;
            break;
            }   
        }

        if(isCommon){
            bool alreadyPrinted = false;
            for(int k=0; k<i; k++){
                if(Arr[k] == Arr[i]){
                    alreadyPrinted = true;
                    break;
                }
            }
            if(!alreadyPrinted){
                cout<<Arr[i]<<" ";
            }
        }
    }
    cout<<endl;
}

int main(){
    int Arr[] = {1, 2, 4 ,8 ,4, 7 ,91};
    int arr[] = {9, 3, 6, 8, 1, 4};
    int Size = sizeof(Arr)/sizeof(Arr[0]);
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Arr: ";
    for(int i=0; i<Size; i++){
        cout<<Arr[i]<<" ";
    }
    cout<<endl;

    cout<<"arr: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    intersectionOfTwoArray(Arr, Size, arr, size);
    return 0;
}