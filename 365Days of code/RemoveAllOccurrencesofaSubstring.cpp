#include<iostream>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
    size_t found = s.find(part);
    while (found != string::npos)
    {
        s.erase(found, part.length());
        found = s.find(part);
    }

        return s;
    }
};