#include <iostream>
using namespace std;

class Solution {
public:
    int minChanges(int n, int k) {
        if (k > n) return -1;

        string nBinary = bitset<64>(n).to_string();
        string kBinary = bitset<64>(k).to_string();

        nBinary = nBinary.substr(nBinary.find('1'));
        kBinary = kBinary.substr(kBinary.find('1'));

        if (kBinary.size() > nBinary.size()) return -1;

        while (kBinary.size() < nBinary.size()) {
            kBinary = '0' + kBinary;
        }

        int changes = 0;
        for (int i = 0; i < nBinary.size(); ++i) {
            if (nBinary[i] == '1' && kBinary[i] == '0') {
                changes++;
            } else if (nBinary[i] == '0' && kBinary[i] == '1') {
                return -1; 
            }
        }

        return changes;
    }
};
