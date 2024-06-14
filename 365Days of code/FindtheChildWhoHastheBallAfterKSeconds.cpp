#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfChild(int n, int k) {
        int a = 0;
        int i = 0;
        while(abs(i)<n){
            i=i+1;
            a++;
            if(i==n-1){
                i = -(n-1);
            }
            if(a==k){
                return abs(i);
            }
        }
        return 0;
    }
};