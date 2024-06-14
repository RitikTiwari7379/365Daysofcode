#include <iostream>
#include<vector>
using namespace std;
#include <bits/stdc++.h> 
vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    vector<int> arr;
    int row = mat.size();
    int col = mat[0].size();
    for(int i = 0; i<row; i++){
        if(i&1){
            for(int j = col-1; j>=0; j--){
                arr.push_back(mat[i][j]);
            }
        }
        else{
            for(int j = 0; j<col; j++){
                arr.push_back(mat[i][j]);
            }
        }
    }
    return arr;
}

