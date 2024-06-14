#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>vec;
        vector<int>result;
        int n = arr1.size();
        int m = arr2.size();
        int a =0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(arr2[i]==arr1[j]){
                 a = arr1[j];
                 vec.push_back(a); 
                 arr1[j]=1001;
                }
            }
        }
        sort(arr1.begin(), arr1.end());
        for (int i = 0; i < n; ++i) {
            if (arr1[i] != 1001) {
                vec.push_back(arr1[i]);
            }
        }
        return vec;

        // optimised code
         unordered_map<int,int> mp;
        
        for(int i=0;i<arr1.size();i++)
        {
            mp[arr1[i]]++;
        }
        
        vector<int> ans;
        
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=0;j<mp[arr2[i]];j++)
            ans.push_back(arr2[i]);
            
            mp.erase(arr2[i]);
        }
        int k = ans.size();
        
        for(auto x : mp)
        {
            for(int i=0;i<x.second;i++)
            ans.push_back(x.first);
        }
        sort(ans.begin()+k,ans.end());
        return ans;

    }
};