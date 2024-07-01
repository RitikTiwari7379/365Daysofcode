#include <iostream>
using namespace std;

class Solution{
    public:
    //Complete this function
    void print(int cnt,int n){
        cout<<cnt<<" ";
        cnt++;
        if(cnt<=n){
            print(cnt,n); 
        }
       
    }
    void printNos(int N)
    {
        //Your code here
        int cnt  = 1 ;
        print(cnt,N);
        
    }
};
