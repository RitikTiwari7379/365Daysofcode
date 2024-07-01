#include <iostream>
using namespace std;

class Solution {
  public:
    void print(int cnt, int n){
        if(cnt>n) return;
        print(cnt+1,n);
        cout<<cnt<<" ";
    }
    void printNos(int N) {
        print(1,N);
    }
};