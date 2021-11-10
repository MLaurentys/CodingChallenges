// https://leetcode.com/problems/number-of-valid-words-for-each-puzzle/

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

unsigned make_mask(const string& word) {
    int mask = 0;
    for (auto ch : word)
        mask |= 1 << (ch - 'a');
    return mask;
}

bool validate(unsigned wd_mask, unsigned pz_mask, char fl) {
    return wd_mask & (1 << (fl - 'a')) &&
          (wd_mask & pz_mask) == wd_mask;
}
class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        size_t n = words.size();
        size_t m = puzzles.size();
        unordered_map<unsigned, unsigned> words_count;
        vector<int> ret(m);
        for (const string& wd : words)
            words_count[make_mask(wd)] += 1;
        for (int i = 0; i < puzzles.size(); ++i) {
            unsigned mask = make_mask(puzzles[i]);
            unsigned f_char_mask = 1 << puzzles[i][0] - 'a';
            unsigned aux_mask = mask;
            while (aux_mask) {
                if (aux_mask & f_char_mask)
                    ret[i] += words_count[aux_mask];
                aux_mask -= 1;
                aux_mask &= mask;
            }
        }
        return ret;
    }
};