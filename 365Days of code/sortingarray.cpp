#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            int s = nums[i];
            for(int j = i; j<n; j++){
                if(nums[j]<=s){
                    s = nums[j];
                }
            }
            swap(s, nums[i]);
        }
        vector<int> ans(nums);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> num = {5, 4, 3, 2, 1};
    vector<int> a = solution.sortArray(num);

    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    return 0;
}