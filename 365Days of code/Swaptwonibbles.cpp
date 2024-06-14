#include <iostream>
using namespace std;

class Solution{
public:
    int swapNibbles(int N){
        // code here
       
        int result = 0;
        result = ((N & 0x0F) << 4) | ((N & 0xF0) >> 4);
        return result;
    }
};