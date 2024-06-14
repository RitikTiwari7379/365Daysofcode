#include <iostream>
#include<vector>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int a = 1;
	    int b = 0;
	    int c = 0;
	    for(int  i= 0; i<n;i++){
	        int count = 0;
	        for(int j = 0; j<m;j++){
	            if(arr[i][j]==a){
	                count ++;
	            }
	        }
	        if(b<count){
	          b = count;
	          c = i;
	        }
	    }
	    if(b == 0){
	        return -1;
	    }
	    return c;
	}

};

