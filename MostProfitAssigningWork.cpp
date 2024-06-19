#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = profit.size();
        int m = worker.size();
        int sum = 0;
        for(int i = 0; i<m; i++){
            int b = 0;
            int a = 0;
            for(int j = 0; j<n; j++){
                if(worker[i]>=difficulty[j]){
                    if(profit[j]>b){
                       b = profit[j];
                    }
                }
            }
            sum+=b; 
        }
        return sum;

        // By map it can be Done !
    }
};