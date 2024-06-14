#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        int mid = (2*n)/2;
        int i = 0;
        int j = mid;
        int m = 2*n;
        while(i<mid && j<m){
            arr.push_back(nums[i]);
            arr.push_back(nums[j]);
            i++;
            j++;
        }
        return arr;
    } 
};