#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
        int start = 0;
        int n=nums.size();

        for(int i=1;i<=n;i++){
            if(i==n || nums[i]!=nums[i-1]+1 ){
                if(start==i-1){
                    ranges.push_back(to_string(nums[start]));
                }else{
                    ranges.push_back(to_string(nums[start])+ "->" + to_string(nums[i-1]));
                } 
                start=i;
            }
            
        }
        return ranges;
    }
};
