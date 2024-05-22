#include <iostream>
using namespace std;

class Solution{
	public:
		int nthStair(int n){

		  //  Methode 1(Easiest Methode)
		  
		    int count  = 0;
		    for(int i = 0; i<=n/2; i++){
		        int remainingsteps  =  n-2*i;
		        count++;
		    }
		    return count;
		}
};



// class Solution {
// public:
//     int nthStair(int n) {
        // Methode 2
//         vector<int> dp(n + 1, 0);
//         dp[0] = 1;  

      
//         for (int i = 1; i <= n; ++i) {
//             dp[i] = dp[i - 1];  
//             if (i >= 2) {
//                 dp[i] += dp[i - 2];  
//             }
//         }
//         int distinctWays = 0;

//         for (int i = 0; i <= n / 2; ++i) {
//             distinctWays++;
//         }

//         return distinctWays;
//     }
// };