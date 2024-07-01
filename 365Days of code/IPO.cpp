#include <iostream>
#include<vector>
#include <queue>
using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
       
        // TLE
    //    int maxcapital = w;
    //    int n =  profits.size();
    //    for(int j = 0; j<k; j++){
    //         int curr = 0;
    //         int a = 0;
    //         for(int i = 0; i<profits.size(); i++){
    //             if(capital[i]<=w && capital[i]!=-1){ 
    //                if(curr<profits[i]){
    //                  curr = profits[i];
    //                  a=i;
    //                }
    //             }
    //         }
    //        capital[a]=-1;
    //        maxcapital+=curr;
    //        w = maxcapital;
    //     }
    //     return maxcapital;

    // Optimised Code

       int n = profits.size();

       vector<pair<int,int>>vec(n);

        for(int i = 0; i<n; i++){
          vec[i] = {capital[i], profits[i]};
        }
        sort(begin(vec),end(vec));  //this by default sort on the basis of 1st value

        priority_queue<int> pq;

        int i = 0;
        while(k--){

            while(i<n && vec[i].first <= w){
                pq.push(vec[i].second);
                i++;
            }
            if(pq.empty()){
                break;
            }
            
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};