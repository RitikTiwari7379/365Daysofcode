#include <iostream>
using namespace std;

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int n = 0;
        int sum = 0;
        for(int i = 0; i<hours.size()-1;i++){
            for(int j = i+1; j<hours.size(); j++){
               sum =  hours[i]+hours[j]; 
               if(sum%24==0){
                  n++;
               } 
            } 
        }
        return n;
    }
};