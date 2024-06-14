#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<double> ans;
        vector<int> answer;
        double res = 0.0;
        double num = 0.0;
        double den = 0.0;
        for(int i = 0; i < arr.size()-1; i++) {
            for(int j = i+1; j < arr.size(); j++) {
                num = arr[i];
                den = arr[j];
                res = num / den;
                ans.push_back(res);
            }
        }
        sort(ans.begin(),ans.end());

        double result = 0;
        for(int i = 0; i < k; i++) {
            if(i == k-1) {
               result = ans[i];
            }
        }
        for(int i = 0; i < arr.size()-1; i++) {
            for(int j = i+1; j < arr.size(); j++) {
                num = arr[i];
                den = arr[j];
                res = num / den;
                if(res == result){
                    answer.push_back(arr[i]);
                    answer.push_back(arr[j]);
                }
            }
        }
        return answer;
    }
};