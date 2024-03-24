#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 1;
        while(i<nums.size()){
           if(nums[i] == nums[i-1]){
            break;
           }
           i++;
        }
        return nums[i];
    }
};