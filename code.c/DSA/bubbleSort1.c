#include<stdio.h>

void printArray(int* A, int n){
    for(int i=0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int* A, int n){
    int temp;
    for(int i=0; i< n-1; i++){  // For number of pass
        
        printf("Working on pass number %d\n", i+1);

        for(int j=0; j< n-1-i; j++){   //For comparision in each pass
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);  //printing the Array before sorting
    bubbleSort(A, n);  //Function to Sort the Array
    printArray(A, n);  //printing the Array after sorting
    return 0;
}