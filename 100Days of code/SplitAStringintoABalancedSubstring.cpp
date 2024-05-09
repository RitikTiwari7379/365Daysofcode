#include <iostream>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int n = 0;
        int substring = 0;
        for(int i = 0; i<s.size(); i++) {
            if(s[i]== 'L'){
                count++;
            }
            else if(s[i] == 'R'){
                 n++;
            }
            if(count == n){
                substring++;
                count = 0;
                n = 0;
            }
        }
        return substring;
    }
};