#include <bits/stdc++.h>

using namespace std;

/* ------ Matrix Diagonal Sum ------ */
/* ------ https://leetcode.com/problems/matrix-diagonal-sum/ ------ */

int diagonalSum(vector<vector<int>>& mat) {
    int dia=0;
    int n=mat.size(),m=mat.size();
    for(int i=0;i<n;i++){
        dia+=mat[i][i];
        dia+=mat[i][n-1-i];
    }
    if(n%2!=0) dia-=mat[n/2][n/2];
    return dia;
}

/* ------ Time complexity = O(n) ------ */
/* ------ space complexity = O(1) ------ */



/* ------ Reshape the Matrix ------ */
/* ------ https://leetcode.com/problems/reshape-the-matrix/ ------ */

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int n=mat.size(),m=mat[0].size();
    vector<int>temp;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(temp.size()==c){
                ans.push_back(temp);
                temp.clear();
            }
            temp.push_back(mat[i][j]);
        }
    }
    ans.push_back(temp);
    if(r*c!=n*m) return mat;
    return ans;
}

/* ------ Time complexity = O(n*m)  ------ */
/* ------ space complexity = O(1)  ------ */




/* ------ Spiral Matrix ------ */
/* ------ https://leetcode.com/problems/container-with-most-water/ ------ */

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> ans;
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {

        // left -> right
        for (int j = left; j <= right; j++) {
            ans.push_back(matrix[top][j]);
        }
        top++;

        // top -> bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom) {
            // right -> left
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        if (left <= right) {
            // bottom -> top
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}

/* ------ Time complexity = O(n*m) ------ */
/* ------ space complexity = O(1) ------ */