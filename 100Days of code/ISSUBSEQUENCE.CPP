#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        // vector<int> arr;
        int i = 0;
        int j = 0;
        int count1 = 0;
        int count = 0;
        while(i<s.length() && j<t.length()){
           if(s[i]==t[j] && j>=count){
            i++;
            j++;
            count1=j;
            count++;
           }
           else{
            j++;
           }
        }
        if(count == s.size()){
            return true;
        }
        else{
            return false;
        }
        return 0;  
    }
};