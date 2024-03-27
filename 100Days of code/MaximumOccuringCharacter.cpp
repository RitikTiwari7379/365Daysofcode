#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr [26] = {0};
        int n = str.size();
        
        for(int i=0; i<n; i++){
            int count = 0;
            char ch = str[i];
            count = ch - 'a';
            arr[count]++;
        }
        
        int maxi = -1;
        int ans = 0;
        for(int i = 0; i<26; i++){
            if(maxi<arr[i]){
                ans = i;
                maxi = arr[i];
            }
        }
        char actualans = ans + 'a';
        
        return actualans;;
    
    }

};