#include <iostream>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        // TLE

        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // int cnt = 0;
        // for(int i = 0; i<n; i++){
        //     int j  = 0;
        //     while(j<n){
        //         if(nums[i]==nums[j] && i!=j){
        //             nums[i]++;
        //             cnt++;
        //             j = 0;
        //         }
        //         else{
        //            j++;
        //         }  
        //     }
        // }
        // return cnt;

        // OPTIMISED CODE

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 0;
        for(int i = 1; i<n; i++){
            if(nums[i]<=nums[i-1]){
              cnt+= nums[i-1]-nums[i]+1;
              nums[i] = nums[i-1]+1;
            } 
        }
        return cnt;

        // Using Map
        // map<int,int>m;
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }

        // for(auto i:m){
        //     if(i.second>1){
        //         int c=i.second;
        //         ans+=c-1;
        //         m[i.first+1]+=c-1;  
        //     }
        // }
        // return ans;

        // more better
        int count =0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
          if(nums[i]==nums[i-1]){
            int diff=1;
            count+=diff;
            nums[i]=nums[i]+diff;
          }
          if(nums[i]<nums[i-1]){
            int diff=nums[i-1]-nums[i]+1;
            count+=diff;
            nums[i]=nums[i]+diff;
           }
        }
       return count;
    }
};