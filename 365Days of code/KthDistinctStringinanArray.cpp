#include <iostream>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        // High Complexity Question

        // int a = 0;
        // string st;
        // for(int i = 0; i<arr.size(); i++){
        //     int n = 0;
        //     for(int j = 0; j<arr.size(); j++){
        //         if(arr[i]==arr[j]){
        //             n++;
        //         }
        //     }
        //     if(n==1){
        //         a++;
        //         if(a==k){
        //             st = arr[i];
        //             return st;
        //         }
        //     }
        // }
        // return st;

        unordered_map<string,int> mp;
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        int a = 0;
        for(int i = 0; i<arr.size(); i++){
            // for(const auto&str:arr){}
            // if(mp[str]==1)
            if(mp[arr[i]]==1){
                a++;
                if(a==k){
                    return arr[i];
                }
            }
        }
        return "";
    }
};