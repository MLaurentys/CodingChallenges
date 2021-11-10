// https://leetcode.com/problems/break-a-palindrome/

#include "string"

using namespace std;

class Solution {
public:
    string breakPalindrome(string palindrome) {
        if (palindrome.length() == 1)
            return "";
        bool odd = palindrome.length()%2;
        int mid = palindrome.length()/2;
        for (int i  = 0; i < palindrome.length(); ++i) {
            if (odd && i == mid)
                continue;
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[palindrome.length()-1] = 'b';
        return palindrome;
    }
};