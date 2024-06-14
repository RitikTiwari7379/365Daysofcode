#include <iostream>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {

        // 1.Naive Approach

        // bool v = false;
        // int count = 0;
        // for (int i = 0; i<word.size(); i++) {
        //   if (word[i] == ch) {
        //     v = true;
        //     count = i;
        //     break;
        //   }
        // }
        // if(v){
        //     int i = 0;
        //     while(i<=count){
        //         swap(word[i], word[count]);
        //         i++;
        //         count--;
        //     }
        //     return word;
        // }
        // else{
        //     return word;
        // }

        // 2.Optimised Approach

        size_t found = word.find(ch);
        if(found!=string::npos){
           int i = 0;
            while(i<found){
                swap(word[i], word[found]);
                i++;
                found--;
            }
            return word;
        }
        else{
            return word;
        }
    
    }
};