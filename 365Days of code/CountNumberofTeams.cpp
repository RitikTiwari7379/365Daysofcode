#include <iostream>
using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = 0; 
        for(int i = 0; i<rating.size()-2; i++){
            for(int j = i+1; j<rating.size()-1; j++){
                for(int k = j+1; k<rating.size(); k++){
                    if(rating[i]<rating[j] && rating[j]<rating[k]){
                        n++;
                    }
                    else if(rating[i]>rating[j] && rating[j]>rating[k]){
                        n++;
                    }
                }
            }
        }
        return n;
    }
};


class Solution {
public:

int numTeams(vector<int>& rating) {
    int count = 0;
    int len = rating.size();

    for (int i = 0; i < len; i++) {
        int a = rating[i];

        for (int j = i + 1; j < len; j++) {
            int b = rating[j];
            bool comp = a < b;

            for (int k = j + 1; k < len; k++) {
                int c = rating[k];

                if (b < c == comp) {
                    count++;
                }
            }
        }
    }

    return count;
}
};