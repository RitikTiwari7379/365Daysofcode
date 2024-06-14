#include <iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int cnt = 0;
        int length = 0;
        int a = s.length();
        bool odd = false;
        vector<char>vec(a);
        for(int i = 0; i<a; i++){
           vec[i]=s[i];
        }
        while(cnt<a){
            char ch = vec[cnt];
            int count = 0;
            for(int i = 0; i<a; i++){
                if(s[i]==ch && ch!='$'){
                    count++;
                    vec[i] = '$';
                }
            }
            if(count%2==0){
                length+=count;
            }
            else{
                length += count-1;
                odd = true;
            }
            cnt++;
        }
        if(odd){
            length+=1;
        }
        return length;

        // Optimised code(Best question for map)

         int ans=0;
        int n=s.length();
        map<char, int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        bool isOdd=false;
        //to iterate over a string
        map<char, int>::iterator itr;
        for(itr=m.begin();itr!=m.end();itr++){
            if(itr->second%2==1){
                isOdd = true;
            }
            ans += (itr->second/2)*2;
        }
        return ans+(isOdd>0?1:0);
    }
};

