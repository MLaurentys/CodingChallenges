// https://leetcode.com/problems/delete-operation-for-two-strings/

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector< int>> dp;
    int l2;


    int calcDist (string s1, string s2, int i1, int i2) {
        if (i1 < 0 || i2 < 0) return 1 + max(i1, i2);
        if (dp[i1][i2] != -1) return dp[i1][i2];
        int dist;
        if (s1[i1] == s2[i2])
            dist = calcDist(s1,s2,i1-1,i2-1);
        else
            dist = 1 + min(calcDist(s1,s2,i1-1,i2), calcDist(s1,s2,i1,i2-1));
        dp[i1][i2] = dist;
        return dist;
    }

    int minDistance(string s1, string s2) {
        dp = {s1.length() + 1, vector<int>(s2.length() + 1, -1)};
        for (int i = 0; i <= s1.length(); i++) {
            for (int j = 0; j <= s2.length(); j++) {
                if (i == 0 || j == 0)
                    dp[i][j] = i + j;
                else if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] = 1 +min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[s1.length()][s2.length()];
    }
};