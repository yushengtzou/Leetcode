// 1572. Matrix Diagonal Sum
// 鄒雨笙 2024.1.2


#include <iostream>
#include <vector>
using namespace std;


int diagonalSum(vector<vector<int>>& mat) {
    int forwardSum = 0;
    int backwardSum = 0;
    int column;
    int ans;
    
    if (mat.size() == 1) {
        ans = mat[0][0];
    }
    else {
        column = 0;
        for (int row = 0; row < mat.size(); row++) {
            forwardSum += mat[row][column];
            column++;
        } 
        column = mat.size()-1;
        for (int row = 0; row < mat.size(); row++) {
            backwardSum += mat[row][column];
            column--;
        } 
        ans = forwardSum + backwardSum;

        if (mat.size() % 2 == 1) {
            int len = mat.size() / 2;
            ans -= mat[len][len];
        }
    }

    return ans;
}


int main() {
    vector<vector<int>> mat;
    // mat = {{1, 2, 3},
    //        {4, 5, 6},
    //        {7, 8, 9}};
    // cout << diagonalSum(mat) << endl;
    //
    // mat = {{1, 1, 1, 1},
    //        {1, 1, 1, 1},
    //        {1, 1, 1, 1},
    //        {1, 1, 1, 1}};
    // cout << diagonalSum(mat) << endl;
    //
    // mat = {{5}
    //        };
    // cout << diagonalSum(mat) << endl;

    mat = {{7,9, 8, 6, 3},
           {3,9, 4, 5, 2},
           {8,1,10, 4,10},
           {9,5,10, 9, 6},
           {7,2, 4,10, 8}};
    cout << diagonalSum(mat) << endl;
}


