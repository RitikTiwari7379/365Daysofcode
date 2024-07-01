#include <iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        //TLE
        
        // long long n = 0;
        // long long sum = 0;
        // for(long long i = 0; i<hours.size()-1;i++){
        //     for(long long j = i+1; j<hours.size(); j++){
        //        sum =  hours[i]+hours[j]; 
        //        if(sum%24==0){
        //           n++;
        //        } 
        //     } 
        // }
        // return n;
        
        //OPTIMISED CODE
        
        unordered_map<long long,long long>mp;
        for(long long i = 0; i<hours.size(); i++){
            mp[hours[i]%24]++;
        }
        long long pairs = 0;
        for(const auto &hour:hours){
           int mod = hour % 24;
           mp[mod]--;  
        
           int complement = (24 - mod) % 24;
       
           pairs += mp[complement];
        }
        return pairs;
    }
};