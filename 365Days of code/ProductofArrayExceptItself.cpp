#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        int multiple = 1;
        int count = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]!=0){
               multiple = multiple * nums[i];
            }
            else{
                count++;
            }
        }
         
        int a = 0; 
        for(int i = 0; i<n; i++){
            if(count==0){
               int num = multiple/nums[i];
                arr.push_back(num);
            }
            else if(count==1){
                if(nums[i]==0){
                   arr.push_back(multiple);
                }
                else{
                    arr.push_back(a);
                }
            }
            else{
                 arr.push_back(a);
            }
        }
        return arr;
    }
};
