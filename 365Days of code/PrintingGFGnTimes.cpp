#include <iostream>
using namespace std;

class Solution {
  public:
  void print(int cnt,int n){
      cout<<"GFG"<<" ";
      cnt++;
      if(cnt<=n){
          print(cnt,n);
      }
  }
    void printGfg(int N) {
        int cnt = 1;
        print(cnt,N);
    }
};

// More cleaned version

class Solution {
  public:
  void print(int cnt,int n){
      if(cnt>n){
          return;
      }
      cout<<"GFG"<<" ";
      print(cnt+1,n);
  }
    void printGfg(int N) {
        
        print(1,N);
    }
};