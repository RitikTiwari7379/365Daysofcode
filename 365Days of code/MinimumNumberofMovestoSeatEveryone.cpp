#include <iostream>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        // sort(seats.begin(), seats.end());
        // sort(students.begin(), students.end());
        // int cnt = 0;
        // int i = 0;
        // int j = 0;
        // while(i<seats.size() && j<students.size()){
        //     if(seats[i]!=students[j]){
        //         while(students[j]!=seats[i]){
        //             if(students[j]>seats[i]){
        //                 students[j]--;
        //                 cnt++;
        //             }
        //             else{
        //                 students[j]++;
        //                 cnt++;
        //             }
        //         }
        //     }
        //     i++;
        //     j++;
        // }

        // more optimised
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int cnt = 0;
        for(int i = 0; i<seats.size(); i++){
            cnt += abs(students[i]-seats[i]);
        }

        return cnt;
    }
};