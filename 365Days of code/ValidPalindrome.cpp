#include<iostream>
using namespace std;
class Solution {
public:
    char converttolowercase(char a){
        if(a>='a' && a<='z'){
            return a;
        }
        else {
            char temp = a -'A' + 'a';
            return temp;
        }
        return 0;
    }
    
    bool isPalindrome(string s) {
        // string b = removeNonAlphanumeric(s);
        int start = 0;
        int e = s.size()-1;
        int count = 0;
        
        while (start < e) {
            if(!isalnum(s[start])){
                start++;
            }
            else if(!isalnum(s[e])){
                e--;
            }
            else if (converttolowercase(s[start]) != converttolowercase(s[e])) {
                count++;
                return false;
            } 
            else {
                start++;
                e--;
            }
        }

        if(count == 0){
           return true;
        }
        return 0;
    }
       
    
};
