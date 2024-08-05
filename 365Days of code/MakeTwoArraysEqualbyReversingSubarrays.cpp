#include <iostream>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n = target.size();
        int cnt = 0;
        sort(target.begin(),target.end());
        sort(arr.begin(), arr.end());
        for(int i = 0; i<n; i++){
                if(target[i]==arr[i]){
                    cnt++;
                }
        }
        if(cnt==n){
            return true;
        }
        return false;
    }
};

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> arrFreq;
        for (int num : arr) {
            arrFreq[num]++;
        }

        unordered_map<int, int> targetFreq;
        for (int num : target) {
            targetFreq[num]++;
        }

        if (arrFreq.size() != targetFreq.size()) {
            return false;
        }

        for (auto it : arrFreq) {
            if (targetFreq[it.first] != it.second) {
                return false;
            }
        }

        return true;
    }
};