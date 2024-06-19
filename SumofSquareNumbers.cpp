#include <iostream>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
       if (c==0) return true;
       long long  i = 1;
       while(i*i<=c){
            long long b = i*i;
            long long a = c-b;
            long long d = sqrt(a);
            if(d*d==a){
                return true;
            }
            i++;
       }
       return false;

    //Optimised Code
    long long left{}, right = sqrt(c);

        while(left<=right)
        {
            const long long sum = left * left + right*right;

            if(sum == c)
                return true;
            
            if(sum > c)
                --right;
            else
                ++left;
        }

        return false;
    }
};