#include <iostream>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string st = "";
        string a = strs[0];

        for(int i = 0; i < a.size(); i++) {
            int n = 1; 
            for(int j = 1; j < strs.size(); j++) {
                string b = strs[j];
                if(a[i] == b[i]) {
                    n++;
                }
            }
            if(n == strs.size()) {
                char x = a[i];
                st.push_back(x);
            } 
            else {
                break; 
            }
        }
        return st;
    }
};

// longestCommonSubstring
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Function to find the longest common substring between two strings
std::string commonSubstring(const std::string& s1, const std::string& s2) {
    int len1 = s1.size();
    int len2 = s2.size();
    int max_len = 0;
    int end_pos = 0;
    std::vector<std::vector<int>> dp(len1 + 1, std::vector<int>(len2 + 1, 0));

    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > max_len) {
                    max_len = dp[i][j];
                    end_pos = i;
                }
            }
        }
    }

    return s1.substr(end_pos - max_len, max_len);
}

// Function to find the longest common substring among an array of strings
std::string longestCommonSubstring(const std::vector<std::string>& strs) {
    if (strs.empty()) {
        return "";
    }

    std::string longest_substr = strs[0];

    for (size_t i = 1; i < strs.size(); ++i) {
        longest_substr = commonSubstring(longest_substr, strs[i]);
        if (longest_substr.empty()) {
            break;
        }
    }

    return longest_substr;
}

int main() {
    std::vector<std::string> strs = {"hello", "yellow", "mellow"};
    std::string result = longestCommonSubstring(strs);

    std::cout << "Longest common substring: " << result << std::endl;

    return 0;
}
