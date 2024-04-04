#include <iostream>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int a =0;
        int count = 0;
        for(int i = 0; i<s.size(); i++){
           if(s[i]=='('){
             a++;
           }
           else if(s[i]==')'){
             if(a>count){
               count = a;
             } 
            a = a-1;
           }
        }
        return count;
    }
};