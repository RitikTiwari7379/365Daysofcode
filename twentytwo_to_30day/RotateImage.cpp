#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> m(col,vector<int>(row)); 
        
        int count = 0;
        while(count<col){
            vector<int> arr;
            for(int i = 0; i<row;i++){
               arr.push_back(matrix[i][count]);
            }
            reverse(arr.begin(), arr.end());
            
            for(int i = 0; i<col; i++){
                    m[count][i] = arr[i];
            }
            count++;
        }
        for(int i = 0 ; i<row ; i++){
            for(int j = 0; j<col;j++){
                matrix[i][j]= m[i][j];
            }
        }   
    }
};


