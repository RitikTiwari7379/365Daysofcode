#include<iostream>
using namespace std;
class Solution {
    private:
    bool erase1(string &str){
        string a = "";
        for(int i = 0; i<str.size(); i++){
           if(str[i] == str[i+1]){
              a.push_back(str[i]);
              a.push_back(str[i+1]);
              int x = a.size();
              str.erase(i , x);
              return 1;
            }
        }
        return 0;
    }
    public:
    string removeDuplicates(string s) {
     bool a = 1;
       while(a!=0){
         a = erase1(s);
         if(a==0){
          return s;
         }
        }
      return 0;
    }  
};