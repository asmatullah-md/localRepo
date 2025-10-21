#include<stdio.h>

int LinearSearch(int arr[], int size, int element){
    for( int i=0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,54,87,35,154,1258,5,0};
    int size = sizeof(arr)/sizeof(int);
    int element = 54;
    int searchIndex = LinearSearch(arr, size, element);
    printf("The element %d found at index %d \n", element, searchIndex);
    return 0;
}