#include <string>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        char actualS[201];
        char actualT[201];
        int itS = 0, itT =0;
        for (char c : S) {
            if (c == '#')
                --itS;
            else
                actualS[itS++] = c;
            if (itS < 0) itS = 0;
        }
        actualS[itS] = '\0';
        for (char c : T) {
            if (c == '#')
                --itT;
            else
                actualT[itT++] = c;
            if (itT < 0) itT = 0;
        }
        actualS[itT] = '\0';
        if (itT == itS) {
            for (int i = 0; i < itS; ++i)
                if (actualS[i] != actualT[i])
                    return false;
            return true;
        }
        return false;
    }
};