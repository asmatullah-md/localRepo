#include<stdio.h>

void printArray(int* A, int m){
    for(int i=0; i < m; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void printArray(int* B, int n){
    for(int j=0; j < n; j++){
        printf("%d ", B[j]);
    }
    printf("\n");
}

void mergeSort(int A[], int B[], int m, int n, int C[]){
    int i= 0, j= 0, k= 0;

    while(i<m && j<n){
        if(A[i] < B[j]){
            C[k] = A[i];
            i++;
            k++;
        }else{
            C[k] = B[j];
            j++;
            k++;
        }
    }
    while(i<m){
        C[k] = A[i];
        k++;
        i++;
    }
    while(j<n){
        C[k] = B[j];
        k++;
        j++;
    }
    
    C[k] = [A[i] + B[j]];
    for(int k=0; k<i+j; k++){
        printf("%d", C[k]);
    }
}

int main(){
    int A[] = {2, 4, 8, 12, 34};
    int B[] = {7, 8, 11, 39, 43, 55};
    int m = 5;
    int n = 6;

    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);
    int C[m + n];

    mergeSort(int A[], int B[], int m, int n, int C[]);

    printArray(A, m);
    printArray(B, n);
    mergeSort(A, B, 0, m, n);
    printArray(C, 0, m+n);

    return 0;
}