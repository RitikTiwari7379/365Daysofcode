#include <iostream>
using namespace std;

// class Solution{
//     public:
//     void update(int a[], int n, int updates[], int k)
//     {
//         // TLE code but correct logic
//         for(int i = 0; i<k; i++){
//             int j = updates[i]-1;
//             while(j>=0 && j<n){
//                 a[j] = a[j]+1;
//                 j++;
//             }
//         }
//     }
// };

class Solution{
public:
    void update(int a[], int n, int updates[], int k)
    {
    //   optimised code
        for(int i = 0; i < k; i++){
            int index = updates[i] - 1;
            if(index < n){
                a[index] += 1;
            }
        }

       
        for(int i = 1; i < n; i++){
            a[i] += a[i - 1];
        }
    }
};
