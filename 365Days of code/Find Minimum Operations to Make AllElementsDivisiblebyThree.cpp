#include <iostream>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = 0;
        for(int i = 0; i<nums.size(); i++){
            while(nums[i]%3!=0){
                if((nums[i]-1)%3==0){
                    nums[i]-=1;
                    n++;
                }
                else{
                    nums[i]+=1;
                    n++;
                }
            }
            
        }
        return n;
    }
};