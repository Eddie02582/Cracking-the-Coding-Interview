# 1.7 Zero Matrix

## Question(<a href= "https://leetcode.com/problems/set-matrix-zeroes/">Leetcode 73. Set Matrix Zeroes</a>)
Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to O.<br>


## Solution



``` c++
#include <iostream>
#include <string>
using namespace std;

void nullifyMatrix(vector<vector<int>>& matrix) {
	int m = matrix.size(), n = matrix[0].size();
    unordered_set<int> rows;
    unordered_set<int> cols;
       
    for(int i = 0;i < m;i++){
        for(int j = 0;j<n;j++)
            if (matrix[i][j] == 0){
                rows.insert(i);
                cols.insert(j);
            }        
    }
    for(int i = 0;i < m;i++){
        for(int j = 0;j<n;j++)
            if (rows.count(i) || cols.count(j)){
                matrix[i][j] = 0;
            }
    }

}


```





