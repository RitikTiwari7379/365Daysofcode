#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 1st approach
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int i = 0; 
        int j = 0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size()){
            while(j<nums2.size()){
                if(nums1[i] == nums2[j]){
                  if(arr.empty() || arr.back()!=nums1[i]){
                    arr.push_back(nums1[i]);
                   }
                j++;  
                }
                else{
                  j++;
                }
            }
            i++;
            j=0;
        }
        return arr;
    }
};

// 2nd approach(more efficient)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int i = 0; 
        int j = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                if (arr.empty() || arr.back() != nums1[i]) {
                    arr.push_back(nums1[i]);
                }
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        return arr;
    }
};


