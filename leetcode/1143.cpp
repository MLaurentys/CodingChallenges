// https://leetcode.com/problems/longest-common-subsequence/

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<int>> dp;
    int l2;

    int LCS (string& s1, string& s2, int i1, int i2) {
        if (i1 < 0 || i2 < 0) return 0;
        if (dp[i1][i2] != -1)
            return dp[i1][i2];
        int ret;
        if (s1[i1] == s2[i2])
            ret = 1 + LCS (s1, s2, i1-1, i2-1);
        else
            ret = max(LCS(s1, s2, i1-1, i2), LCS(s1, s2, i1, i2 - 1));
        dp[i1][i2] = ret;
        return ret;
    }

    int longestCommonSubsequence(string text1, string text2) {
        dp = {text1.length(), vector<int>(text2.length(), -1)};
        l2 = text2.length();
        return LCS(text1, text2, text1.length() - 1, text2.length() -1);
    }
};