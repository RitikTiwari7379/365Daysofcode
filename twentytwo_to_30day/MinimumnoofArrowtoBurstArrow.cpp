#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
       auto comparePairs = [](const vector<int>& a, const vector<int>& b) {
            if (a[1]==b[1]) {
                return a[0] < b[0];
            } else {
                return a[1] < b[1];
            }
        };
      
      sort(points.begin(), points.end(), comparePairs);
      int count = 1;
      int start = points[0][1];
      for(int i = 1; i<points.size();i++){
        if(points[i][0]<=start){
         continue;
        }
       else{
        count++;
        start = points[i][1];
       }
      }
     return count;
    }
};

