#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        for(int i = 0; i<names.size(); i++){
            int max = i;
            for(int j = 0; j<names.size(); j++){
                if(heights[j]>= heights[max] && heights[j] != 0){
                    max = j;
                }
            }
            if(heights[max]!=0){
               string s = names[max];
               ans.push_back(s);
               heights[max] = 0;
            }
        }
        return ans;
    }
};