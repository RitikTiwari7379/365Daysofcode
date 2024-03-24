#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> m(n , vector<int>(n));
        int total  = n*n;
        int startingRow = 0;
        int endingRow = n-1;

        int startingCol = 0;
        int endingCol = n-1;
        int num = 1;

        while (num<=total && startingRow<=endingRow && startingCol<=endingCol ){
            // startingRow
           for(int i = startingCol; (i<=endingCol && num<=total); i++){
                m[startingRow][i] = num++;
                
           }
           startingRow++;

          // endingcol
           for( int i = startingRow; (i<=endingRow && num<=total); i++){
                m[i][endingCol] = num++;
               
                
           }
           endingCol--;
           // endingRow
           for(int i = endingCol; (i>=startingCol && num<=total); i--){
                m[endingRow][i] = num++;
                
           }
           
           endingRow--;

           // startingCol
           for(int i = endingRow; (i>=startingRow && num<=total); i--){
                m[i][startingCol] = num++;
                
               
           }
           startingCol++;
        }
        return m;
    }
};

int main(){
    Solution a;
    int n = 3;
    vector<vector<int>>ar=a.generateMatrix(n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}