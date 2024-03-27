#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
  string removespacefromlast(string s){
      int lastindex = s.size()-1;
      while (lastindex>=0 && s[lastindex] == ' '){
          lastindex--;
      }
      s.erase(lastindex + 1);
      return s;
    }

    int lengthOfLastWord(string s) {
        int size = s.size()-1;
        int count = 0;
        if(s.empty()){
            return 0;
        }
        else if(size==0){
            return 1;
        }

        else if(s[size] == ' '){
            string a = removespacefromlast(s);
            int n = a.size()-1;
            while(n >= 0 && a[n] != ' '){
            count++;
            n--;
            }
        }
        else{
            while(size >= 0 && s[size] != ' '){
            count++;
            size--;
            }
        }
        return count;
    }
};

int main(){
    Solution a;
    string str = "hi ritik ";
    cout<<a.lengthOfLastWord(str);
}