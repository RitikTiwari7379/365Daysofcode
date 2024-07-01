#include <iostream>
using namespace std;

class Solution {
public:
      int print(int n){
        if(n==0||n==1){
            return n;
        }
        return print(n-1)+print(n-2);
    }

    int fib(int n) {
       int fibonaccino = print(n); 
       return fibonaccino;
    }


// Best Way
    int fib(int n) {
      if(n==0||n==1){
        return n;
      }
       return fib(n-1)+fib(n-2);
    }
};