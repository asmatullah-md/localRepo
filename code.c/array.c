#include<stdio.h>
int main(){
    int marks[] = {65,85,78,90,45};
    
    // also we use loop for input

    for(int i=0; i<5; i++){
        printf("\n marks %d are: %d", (i+1), marks[i]);
    }
    return 0;
}



// int main(){
//     float price[3];
//     printf("enter 3 prices: ");
//      scanf("%f", &price[0] );
//       scanf("%f", &price[1] );
//        scanf("%f", &price[2] );

//       printf("enter price 1: %f\n", price[0] + (18*price[0])/100);
//       printf("enter price 2: %f\n", price[1] + (18*price[1])/100);
//       printf("enter price 3: %f\n", price[2] + (18*price[2])/100);

//        return 0;
// }



// array is a pointer
// int main(){
//     int aadhar[5];

//     //input
//     int *ptr = &aadhar[0];
//     for(int i=0; i<5; i++){
//         printf("%d index: ", i);
//         //scanf("%d", (ptr+i));
//           scanf("%d", &aadhar[i]);
//     }

//     //output
//     for(int i=0; i<5; i++){
//         //printf("%d index = %d\n", i, *(ptr+i));
//         printf("%d index = %d\n", i, aadhar[i]);

//     }
//     return 0;
// }



// //void printnumbers(int *arr[], int n);
// void printnumbers(int *arr, int n);

// int main(){
//     int arr[] = {4,6,7,9,2,3};
//     printnumbers(arr, 6);
//     return 0;
// }
//     //void printnumbers(int arr[], int n)
//     void printnumbers(int *arr, int n){
//         for(int i=0; i<n; i++){
//             printf("%d\t", arr[i]);
//         }
//         printf("\n");
//     }



// // 2D array
// int main(){
//     int marks[2][3]; // 2 studentas 3 subjects marks
//     marks[0][0] = 90;
//     marks[0][1] = 95;
//     marks[0][2] = 89;

//     marks[1][0] = 91;
//     marks[1][1] = 74;
//     marks[1][2] = 82;

//     printf("%d\t", marks[0][1]);
//     printf("%d\t", marks[0][2]);
//     printf("%d\t", marks[1][1]);

//     return 0;
// }



// int countodd(int arr[], int n);

// int main(){
//     int arr[6] = {1,5,2,4,9,7};
//     printf("%d", countodd(arr,6));
//     return 0;
// }

// int countodd(int arr[], int n){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] % 2!=0){
//             count++;
//         }
//     }
//     return count;
// }



// // reverse array   
// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

// int main(){
//     int arr[] = {1,2,3,4,5};
//     reverse(arr, 5);
//     printArr(arr, 5);
    
//     return 0;
// }

// void printArr(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[], int n){
//    for(int i=0; i<n/2; i++){
//     int firstval = arr[i];
//     int secondval = arr[n-i-1];
//     arr[i] = secondval;
//     arr[n-i-1] = firstval;
//    }
  
// }



//table 2,3
// void storetable(int arr[][10], int n, int m, int number);

// int main(){
//     int tables[2][10];
//     storetable(tables, 0,10,2);
//     storetable(tables, 1,10,3);

//     for(int i=0; i<10; i++){
//         printf("%d\t", tables[0][i]);            
//     }
    
//     printf("\n");
//     for(int i=0; i<10; i++){
//         printf("%d\t", tables[1][i]);
//     }
    
//     printf("\n");
    
//     return 0;
// }
// void storetable20960(int arr[][10], int n, int m, int number);
//   for(int i=0; i<m; i++){
//      arr[n][i] = number * (i+1);
//   }

