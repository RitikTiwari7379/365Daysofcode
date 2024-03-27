#include<iostream>
using namespace std;
class Solution {
    bool check(int value[26] , int value1[26]){
        for(int i = 0; i<26; i++){
            if(value[i]!=value1[i]){
               return 0;
            }
        }
        return 1;

    }
public:
    bool checkInclusion(string s1, string s2) {
        int arr[26]={0};
        for(int i = 0; i<s1.length(); i++){
            char ch = s1[i];
            int count1 = ch - 'a';
            arr[count1]++;
        }

        int window = s1.length();
        int i = 0;
        int arr1[26]={0};
        while(i<window && i<s2.length()){
              char ch1 = s2[i];
              int count2 = ch1 - 'a';
              arr1[count2]++;
              i++;
        }
        
        if(check(arr , arr1))
            return 1;
        

        while(i<s2.size()){
            char newchar = s2[i];
            int count = newchar - 'a';
            arr1[count]++;
             
            char oldchar = s2[i - window];
            int cou = oldchar - 'a';
            arr1[cou]--;
            i++;
            if(check(arr , arr1)){
                return 1;
            } 
        }
        return 0;
    }
};