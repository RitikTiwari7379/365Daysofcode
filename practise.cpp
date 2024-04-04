#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<char> arr;
        for(int i = 0; i<s.length(); i++){
            for(int j = 0 ;j<t.length(); j++){
                if(s[i] == t[j]){
                    char d = t[j];
                   arr.push_back(d);
                   break;
                } 
                if(j==(t.length()-1) && s[i]!=t[j]){
                    return false;
                }
            }
        }
        int n = arr.size();
        if(s.length()==n){
            for(int i = 0 ; i<arr.size()-1; i++){
                if(arr[i+1]>arr[i]){
                    continue;
                }
                else{
                    return false;
                }
            }  
        }

        else{
           return false;
        }

        return true;
    }
};

int main(){
    Solution a;
    string s = "axc";
    string t = "ahbgdc";
    cout<<a.isSubsequence(s,t);
    return 0;
}