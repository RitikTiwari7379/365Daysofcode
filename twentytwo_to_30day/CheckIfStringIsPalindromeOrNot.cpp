#include <bits/stdc++.h>
using namespace std;

char toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int start = 0;
    int e = s.size() - 1;

    while(start <= e){
        if(!isalnum(s[start])){
            start++;
            
        }
        else if(!isalnum(s[e])){
            e--;
        }
        else if (toLowercase(s[start]) != toLowercase(s[e])) {
            return false;
        } 
        
        else{
            start++;
            e--;
        }

    }
    return true;
}
