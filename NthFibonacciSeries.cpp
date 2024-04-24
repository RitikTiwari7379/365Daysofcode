#include <iostream>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
       int a=0;
       int b=1;
       int c= 1;
       int sum;
       if(n==0){
         return a;
       }
       if(n==1 || n==2){
        return b;
       }
        for(int i = 3; i<=n; i++){
           sum=a+b+c;
           a=b;
           b=c;
           c=sum;
        }
        return sum;
    }
};