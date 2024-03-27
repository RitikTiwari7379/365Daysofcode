#include<iostream>
#include<vector>
using namespace std;
//1st approach
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int writeIndex = 0;
        int count = 1; 
        for (int i = 1; i <= n; ++i) {
            if (i == n || chars[i] != chars[i - 1]) {
                chars[writeIndex++] = chars[i - 1]; 
                if (count > 1) {
                    string countStr = to_string(count);
                    for (char c : countStr) {
                        chars[writeIndex++] = c;
                    }
                }
                count = 1;
            } else {
                ++count;
            }
        }
        return writeIndex;
    }
};

// 2nd approach(Similar approach)
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i =0;
        int AnsIndex = 0;
        while (i<n){
            int j = i+1;
            while (j<n && chars[i]==chars[j]){
                 j++;
            }
            chars[AnsIndex++] = chars[i];
            int count = j-i; 
            if(count > 1){
                string countstr = to_string(count);
                for(char ch : countstr){
                  chars[AnsIndex++] = ch;
                }
            }
            i = j;
        }
        return AnsIndex;
    }
};
