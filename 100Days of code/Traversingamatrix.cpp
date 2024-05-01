#include <iostream>
#include<vector>
using namespace std;
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> v;
        int startcol = 0;
        int endcol = c-1;
        int startrow = 0;
        int endrow = r-1;
        
        int count = r*c;
        int a = 0;
        int n = 0;
        while(n<count){
            
            for(int i= startcol ; (i<=endcol) && (n<count); i++){
                a = matrix[startrow][i];
                v.push_back(a);
                n++;
            }
             startrow++;
            
            for(int i=startrow; (i<=endrow) && (n<count); i++){
                a = matrix[i][endcol];
                v.push_back(a);
                n++;
            }
            endcol--;
            
            for(int i= endcol; (i>=startcol) && (n<count); i--){
                a = matrix[endrow][i];
                v.push_back(a);
                n++;
            }
            endrow--;
            
            for(int i= endrow; ( i>=startrow) && (n<count); i--){
                a = matrix[i][startcol];
                v.push_back(a);
                n++;
            }
            startcol++;
            
        }
        return v;
        // code here 
    }
};
