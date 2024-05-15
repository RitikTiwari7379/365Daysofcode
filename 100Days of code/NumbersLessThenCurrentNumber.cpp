#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>vec;
        int n = 0;
        // Methode 1(Nested Loop)
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j< nums.size(); j++){
                if(nums[j]<nums[i]){
                    n++;
                }
            }
            vec.push_back(n);
            n = 0; 
        }
        return vec;

        // Methode 2(Two pointers)

        // int i = 0;
        // int j = 0;
        // while(i<nums.size() && j<=nums.size()){
        //     if(j == nums.size()){
        //         j = 0;
        //         vec.push_back(n);
        //         n = 0;
        //         i++;
        //         continue;
        //     }
        //     if(nums[j]<nums[i]){
        //         n++;
        //     } 
        //     j++;
        // }
        // return vec;
    }
};