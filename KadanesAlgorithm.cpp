#include <iostream>
#include<climits>

using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
       long long curr = 0;
       long long MaxSum = INT_MIN;
        for(long long i = 0; i<n; i++){
            curr = curr + arr[i];
            
            if(MaxSum<curr){
                MaxSum = curr;
            }
            
            if(curr<0){
                curr = 0;
            }
        }
        return MaxSum;
        
    }
};