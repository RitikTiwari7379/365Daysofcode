#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums){
        unordered_map<int,int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        vector<pair<int,int>> freq;

        // for(auto & it:mp){
        //  pairs.push_back(it);
        // }
        for(auto it: mp){
            int ele = it.first;
            int frequency = it.second;
            freq.push_back({ele,frequency});
        }

        sort(freq.begin(), freq.end(), [](auto& a, auto& b) { 
            if(a.second == b.second){
                return a.first>b.first;
            }
            return a.second < b.second; 
        });

        for (auto freqs : freq) { 
          for(int i = 0; i<freqs.second; i++){
              ans.push_back(freqs.first);
          } 
        } 
        return ans;
    }
};