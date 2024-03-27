#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> m;
    int maxfrequency = 0;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        m[arr[i]]++;
        maxfrequency = max(maxfrequency,m[arr[i]]);
    }
   for ( int i = 0; i<arr.size(); i++){
       if(maxfrequency == m[arr[i]]){
            ans = arr[i];
            break;
       }
   }
   return ans;
}