#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

// 1st approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> arr;
        int Row = matrix.size();
        int Col = matrix[0].size();
        int s = 0;
        int end = Row * Col - 1;
        int mid  = 0;
        for(int i = 0; i<Row;i++){
           for(int j = 0; j<Col; j++){
              arr.push_back(matrix[i][j]);
            }
        }

        // one error is here we should have used while loop
        for(int i = 0; i<Row*Col; i++){
            mid = (s+end)/2;
            // mid = s+(end-s)/2;
            if(arr[mid]==target){
                return true;
            }
            else if(arr[mid]>target){
                end = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return false;
    }
};

// 2nd approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int Row = matrix.size();
        int Col = matrix[0].size();
        int start = 0;
        int end = Row * Col - 1;
        int mid  = start + (end-start)/2;
        while(start<=end){
            int element = matrix[mid/Col][mid%Col];
            if(element==target){
                return true;
            }
            else if(element<target){
                start = mid + 1;
            }
            else{
                 end = mid - 1;
            }
            mid  = start+(end-start)/2;
        }
        return false;
    }
};

int main(){
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 0;
    Solution a;
    a.searchMatrix(matrix , target);
}


