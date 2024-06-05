#include <iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> vec;
        string a = words[0];
        for(int i = 0; i<a.size(); i++){
            int cnt = 1;
            for(int j = 1; j<words.size(); j++){
                string& b = words[j]; 
                int k = 0;
                while(k<b.size()){
                  if(a[i]==b[k] && b[k]!='$'){
                    b[k]='$';
                    cnt++;
                    break;
                  }
                  k++;
                }
            }
            if(cnt==words.size()){
                string str(1, a[i]);
                vec.push_back(str);
            }
        }
        return vec;

        // optimmised code

        vector<int> count(26, INT_MAX);
        vector<string> res;
        for (const auto& w : words) {
            vector<int> counts(26, 0);
            for (const auto& c : w) {
                counts[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                count[i] = min(count[i], counts[i]);
            }
        }
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < count[i]; j++) {
                res.push_back(string(1, 'a' + i));
            }
        }
        return res;
    }
};