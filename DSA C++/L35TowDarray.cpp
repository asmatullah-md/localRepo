#include <iostream>
#include<vector>
#include<climits>
using namespace std;

//int main(){
    // int matrix[4][3];
    // int rows = 4;
    // int cols = 3;
    // cout<<"enter number: ";

    // //cout << matrix[3][2]<<endl;

    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin >> matrix[i][j];
    //     }
    // }

    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout << matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
//}



// bool linearSearch(int mat[][3], int rows, int cols, int key){
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(mat[i][j] == key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// pair<int, int> linearSearch(int matri[][3], int rows, int cols, int key){
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(matri[i][j] == key){
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};       
// }

// int main(){
//     int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
//     int rows = 4;
//     int cols = 3;
//     int key = 0;

//     pair<int, int> ans = linearSearch(matrix, rows, cols, key);
//     if(ans.first != -1){
//         cout << "row: "<<ans.first<<endl<<"col: "<<ans.second<<endl;
//     }else{
//         cout <<" Not found"<<endl;
//     }
//     return 0; 
// }



// int getMaxSum(int mat[][3], int rows, int cols){
//     int maxRowSum = INT_MIN;

//     for(int i=0; i<rows; i++){
//         int rowSumI = 0;
//         for(int j=0; j<cols; j++){
//             rowSumI += mat[i][j];
//         }
//         maxRowSum = max(maxRowSum, rowSumI);
//     }
//     return maxRowSum;
// }

// int getMaxSum(int mat[][3], int rows, int cols){
//     int maxColSum = INT_MIN;

//     for(int j=0; j<cols; j++){
//         int colSumj = 0;
//         for(int i=0; i<rows ; i++){
//             colSumj += mat[i][j];
//         }
//         maxColSum = max(maxColSum, colSumj);
//     }
//     return maxColSum;
// }

// int DiagonalSum(int mat[][4], int n){
//     int totalDiagSum = 0;

//     // for(int i=0; i<n; i++){             O(n*n)
//     //     for(int j=0; j<n; j++){
//     //         if(j == i){
//     //             totalDiagSum += mat[i][j];
//     //         }else if(j == n-i-1){
//     //             totalDiagSum += mat[i][j];
//     //         }
//     //     }
//     // }                   
//     //                    [OR]
//     for(int i=0; i<n; i++){         // O(n)
//         totalDiagSum += mat[i][i];

//         if(i != n-i-1){
//             totalDiagSum += mat[i][n-i-1];
//         }
//     }
//     return totalDiagSum;
// }

// int main(){
//     int matrix[4][4] = {{1,2,3,13}, {4,5,6,14}, {7,8,9,15}, {10,11,12,16}};
//     int n = 4;

//     cout << DiagonalSum(matrix, n)<<endl;
//     return 0;
//}


int main(){
    vector<vector<int>> mat = {{1,2,3,13}, {4,5,6,14,80,45}, {7,8,9,15}};

    // row = mat.size();
    // col = mat[i].size();

    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}