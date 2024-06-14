#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // vector<int> vec;
        // for(int i = 0; i<heights.size(); i++){
        //     int a = heights[i];
        //     vec.push_back(a);
        // }
        // sort(heights.begin(), heights.end());
        // int n = 0;
        // for(int i = 0; i<vec.size(); i++){
        //     if(vec[i]!=heights[i]){
        //         n++;
        //     }
        // }
        // return n;

        // more better
        vector<int>vec = heights;
        sort(heights.begin(), heights.end());
        int n = 0;
        for(int i = 0; i<vec.size(); i++){
            if(vec[i]!=heights[i]){
                n++;
            }
        }
        return n;
    }
};