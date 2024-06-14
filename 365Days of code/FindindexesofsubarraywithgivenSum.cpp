#include <iostream>
#include<vector>
using namespace std;

// 1.Naive approach
// class Solution
// {
//     public:
//     //Function to find a continuous sub-array which adds up to a given number.
//     vector<int> subarraySum(vector<int>arr, int n, long long s)
//     {
//         // Your code here
//         vector<int> v;
//         int rightindex = 0;
//         int leftindex = 0;
//         long long sum; 
//         int count=0;
//         // if(arr.size()==1 && arr[n-1]==0){
//         //     v.push_back(-1);
//         // }
//     for(int i = 0; i<n; i++){
//        sum = 0; 
//        for(int j = i; j<n;j++){
//            sum = arr[j]+sum;
//             if(sum == s){
//               leftindex = i+1;
//               rightindex = j+1;
                    
//               v.push_back(leftindex);
//               v.push_back(rightindex);
//               count = 1;
//               break;
//             }
//             else if(sum>s){
//                 break;
//             }
//         }
                
//         if(count >0){
//           break;
//         }
//         else if(i==(n-1 )&& sum!=s && count==0){
//             v.push_back(-1);
//             break;
//         }
                
//     }
//     return v;
//     }
// };


// 2.Optimal solution(Two pointer approach(Sliding window))
class Solution
{
    public:
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {    
        vector<int>v;
        int leftindex = 0;
        int rightindex = 0;
        long long sum =0;
        for(int i= 0; i<n; i++){
            sum+=arr[i];
            rightindex = i;
            while(sum>s && leftindex<rightindex){
                sum-=arr[leftindex++];
            }
        
            if(sum==s){
                v.push_back(leftindex+1);
                v.push_back(rightindex+1);
                return v;
            }
        }
        
        v.push_back(-1);
        return v;
        
    }
};
