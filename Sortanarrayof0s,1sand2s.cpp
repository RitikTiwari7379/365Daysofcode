#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void sort012(int a[], int n) {
        int max_val = *max_element(a, a + n); 

        
        vector<int> count(max_val + 1, 0);

        
        for (int i = 0; i < n; i++) {
            count[a[i]]++;
        }

       
        for (int i = 1; i < count.size(); i++) {
            count[i] += count[i - 1];
        }

        vector<int> output(n);

        
        for (int i = n - 1; i >= 0; i--) {
            output[count[a[i]] - 1] = a[i];
            count[a[i]]--;
        }

        for (int i = 0; i < n; i++) {
            a[i] = output[i];
        }
    }
};

