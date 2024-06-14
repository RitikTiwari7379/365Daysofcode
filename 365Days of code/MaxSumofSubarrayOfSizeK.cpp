#include <iostream>
#include<vector>
using namespace std;

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
         // code here     }
        long sum = 0;
        int i = 0;
        int j = 0;
        int n = 0;
        long Maxsum = 0;
        while(i<N && n<K){
            
            sum=sum+Arr[i];
            n++;
            
            if(sum>=Maxsum){
                Maxsum = sum;
            }
            
            if(n == K){
              sum = sum-Arr[j];
              j++;
              n = n-1;
            }
           i++;
        }
        return Maxsum;
        
    }
};