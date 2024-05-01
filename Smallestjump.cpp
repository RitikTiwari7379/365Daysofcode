#include <iostream>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        if (n <= 1) return 0; 
        if(arr[0]==0){
            return -1;
        }
        
        int count = 1;
       
        int a = arr[0];
        int b = arr[0];
        
        for(int i =1; i<n; i++){
            if(i==n-1){
               return count;
            }
            a = max(a,i+arr[i]);
            b--;   
            
            if(b == 0 ){
                count++;
                if(i>=a) return -1;
                b = a-i;
            }
        }
        return -1;
    }
};