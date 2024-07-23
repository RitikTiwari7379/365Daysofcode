#include <iostream>
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double A_T = customers[0][0];
        double C_T = customers[0][1];
        double a = A_T + C_T;
        double W_T = a - A_T;
        double ln  = customers.size();
        for(int i = 1; i<ln; i++){
            A_T = customers[i][0];
            C_T = customers[i][1];
            a = max(a, A_T) + C_T;
            double c = a - A_T;
            W_T += c;
        }
        double ans = W_T/ln;
        return ans;
    }
};