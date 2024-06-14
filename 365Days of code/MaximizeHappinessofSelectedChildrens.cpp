#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        long long sum = 0;
        int s = 0;
        int n = happiness.size()-1;
        for(int i = n; i>=0 && s<k; i--){
            happiness[i] = happiness[i]-s;
            if(happiness[i]<0){
                break;
            }
            else{
                sum +=happiness[i];
            }
            s++;
        }
        return sum;
    }
};