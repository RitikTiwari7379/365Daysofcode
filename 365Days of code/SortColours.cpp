#include <iostream>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0; i < nums.size(); i++) {
          mp[nums[i]]++;
        }
        nums.clear();

        for(auto it = mp.begin(); it != mp.end(); ++it) {
          for(int count = 0; count < it->second; ++count) {
            nums.push_back(it->first);
           }
        }
    }
};