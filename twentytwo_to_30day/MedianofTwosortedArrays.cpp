#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double m = nums1.size();
        double n = nums2.size();
        int i = 0;
        int j = 0;
        int k = 0;
        vector<double> arr;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
              arr.push_back(nums1[i]);
              i++;
            }
            else {
                arr.push_back(nums2[j]);
                j++;
            }
            k++;
        }
        while(i<m){
            arr.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            arr.push_back(nums2[j]);
            j++;
        }
        double start = 0;
        double end = arr.size();
        int mid = start+(end-start)/2;
        double a =0;
        if(arr.size()&1){
            a = arr[mid];
        }

        else{
            a = (arr[mid]+arr[mid-1])/2;
        }
        
        return a;
        
    }
};

