#include <iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>>& matrix, string path, int r, int c, vector<string>& ans){
    int n = matrix.size();
    if(r<0 || c<0 || r >= n || c >= n || matrix[r][c] == 0 || matrix[r][c] == -1){
        return;
    }
    if(r == n-1 && c == n-1){   //ans
        ans.push_back(path);
        return;
    }

    matrix[r][c] = -1;  // visit

    helper(matrix, path+"D", r+1, c, ans);  //down
    helper(matrix, path+"U", r-1, c, ans);  //up
    helper(matrix, path+"L", r, c-1, ans);  // left
    helper(matrix, path+"R", r, c+1, ans);  //right

    matrix[r][c] = 1;  // backtrack
}

// complete thid function
vector<string> findPath(vector<vector<int>>& matrix){
    int n = matrix.size();

    vector<string> ans;
    string path = "";

    helper(matrix, path, 0, 0, ans);
    return ans;
}

int main(){
    vector<vector<int>> matrix = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> ans = findPath(matrix);
    for(string path : ans){
        cout<< path <<endl;
    }
    return 0;
}