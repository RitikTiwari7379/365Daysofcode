#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>vec;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum+=nums[i];
            vec.push_back(sum);
        }
        return vec;
        
        // more better
        for(int i = 1; i<nums.size(); i++){
            nums[i] = nums[i]+nums[i-1];
        }
        return nums;
    }
};