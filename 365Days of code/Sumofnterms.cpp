#include <iostream>
using namespace std;

class Solution {
  public:
    long long sum(long long n){
      if(n==0){
          return 0;
      }
      return n+sum(n-1);
    }
    long long sumOfSeries(long long n) {
       long long a = sum(n);
       return a*a; 
    }
};
