#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int Row = matrix.size()-1;
        int Col = matrix[0].size()-1;
        int row = 0;
        int col = 0;
        while(row<=Row && Col>=col){
            if(matrix[row][Col]>target){
                Col--;
            }
            else if(matrix[row][Col]<target){
                row++;
            }
            else{
                return true;
            }
        }
        return false; 
    }
};

