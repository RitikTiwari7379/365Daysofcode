#include <iostream>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        
        // we have int() function in cpp which convert a character in its ASCII value
        int i = 0, j = 1, sum = 0;
        while(i<j && j<s.size()){
           sum+=abs(int(s[i] - int(s[j])));
           i++;
           j++;
        }
        return sum;
    }
};