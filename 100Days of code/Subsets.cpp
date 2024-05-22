#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
public:
   int converttobinary(long long n){
      long long ans = 0;
      long long power = 1;
      while(n!=0){
        long long r = n%2;
        n/=2;
        ans+=(r * power);
        power *= 10;
      }
      return ans;
   }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> a;
        long long n = nums.size();
        long long subset = pow(2,n);
        for(long long i = 0; i<subset; i++){
            long long bn = converttobinary(i);
            long long div = pow(10 , n-1);
            
            for(long long j = 0; j<n; j++){
                long long q = bn/div;
                long long r = bn%div;
                if(q != 0){
                    long long b = nums[j];
                    a.push_back(b);
                } 
                bn = r;
                div /= 10;
            }
            vec.push_back(a);
            a.clear();
        }
       return vec;
    }
};
