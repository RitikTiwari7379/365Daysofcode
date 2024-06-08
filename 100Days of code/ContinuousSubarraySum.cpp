#include <iostream>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // TLE incountered at 94th case

        // int i = 0;
        // int j = 0;
        // int sum = 0;
        // int n = 0;
        // while(i<nums.size()-1){
        //     sum+=nums[j];
        //     n++;
        //     if(n>=2){
        //         if(sum%k==0){
        //             return true;
        //         }
        //     }
        //     j++;
        //     if(j==nums.size()){
        //         n = 0;
        //         i++;
        //         j = i;
        //         sum = 0;
        //     }
        // }
        // return false;
        // optimised code(modulo and hash based)



        int n = nums.size();
        int sum = 0;
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        for(int i = 0; i < n; i++){
            sum += nums[i];
            int remainder = (k != 0) ? sum % k : sum; // Handle k = 0 case
            if(mp.find(remainder) != mp.end()){
                if(i - mp[remainder] >= 2){
                    return true;
                }
            }
            else {
                mp[remainder] = i;
            }
        }
        return false;
    }
};