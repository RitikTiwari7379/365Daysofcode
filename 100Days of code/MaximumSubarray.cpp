#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int MaxSum = INT_MIN;
        int i = 0;
        int a = nums.size();
        for(int i = 0; i<a; i++){
             sum+=nums[i];
            if(sum>MaxSum){
                MaxSum = sum;
            }
            if(sum<0){
                sum = 0; 
            }
        }
        return MaxSum;
    }
};