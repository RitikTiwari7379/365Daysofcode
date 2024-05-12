#include <iostream>
#include<vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int r = grid.size();
        vector<vector<int>> vec(r - 2, vector<int>(r - 2)); 
        for (int n = 0; n <= r - 3; ++n) {
            for (int t = 0; t <= r - 3; ++t) {
                int maxvalue = INT_MIN;
                for (int i = n; i <= n + 2; ++i) {
                    for (int j = t; j <= t + 2; ++j) {
                        maxvalue = max(maxvalue, grid[i][j]);
                    }
                }
                vec[n][t] = maxvalue; 
            }
        }
        return vec;
    }
};