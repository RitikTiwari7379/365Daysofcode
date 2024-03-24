#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        // code here
        vector<int> arr;
        for(int i = 0; i<N;i++){
            for(int j = 0; j< N; j++){
                arr.push_back(Mat[i][j]);
            }
        }
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> matrix(N, vector<int>(N));
        int a = 0;
        
        for(int i = 0; i<N; i++){
             for(int j = 0; j<N; j++){
                if(a<arr.size()){
                  matrix[i][j] = arr[a];
                  a++;   
                }
             }
        }
        return matrix;
    }
};

