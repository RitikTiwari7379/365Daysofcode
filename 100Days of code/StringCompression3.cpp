#include <iostream>
using namespace std;

class Solution {
public:
    string compressedString(string word) {
        int i = 1;
        string comp = "";
        char a = word[0];
        int count = 1;
        while(i<word.size()){
            if(word[i]==a && count<9){
                count++;
            }
            else{
                char s = count + '0';
                comp.push_back(s);
                comp.push_back(a);
                count = 1;
                a=word[i];
            }
            i++;
        }
        comp.push_back('0'+count);
        comp.push_back(a);
        return comp;
    }
};