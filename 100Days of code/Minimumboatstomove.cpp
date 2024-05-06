#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0; 
        int boats = 0, j =  people.size()-1;

        // int sum = 0;
        // while(i<=j){
        //     if(people[j]==limit){
        //         j--;
        //         boats++;
        //     }
        //     else{
        //         sum=people[i]+people[j];
        //         if(sum==limit){
        //            boats++;
        //            j--;
        //            i++;
        //         }
        //         else if(sum>limit){
        //             boats++;
        //             j--;
        //         }
        //         else{
        //             boats++;
        //             i++;
        //             j--;
        //         }
               
        //     }
        // }

        while(i<=j){
            if(people[i]+people[j]<=limit){
                boats++;
                i++;
                j--;
            }
            else{
                boats++;
                j--;
            }
        }
        return boats;
    }
};