#include <iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
      vector<int> vec;
      for(int i = 0; i<=r;i++){
          int a = arr[i];
          vec.push_back(a);
      }
      
      sort(vec.begin(), vec.end());
      int count = vec[k-1];
      return count;
    }
};