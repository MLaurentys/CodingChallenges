#include <algorithm>
#include <iostream>
#include <pair>
#include <vector>

using namespace std;

auto min_max = std::vector<pair<int, int>>;

bool IsInside(pair<int, int> p1, pair<int, int> p2) {
        return p1.first >= p2.first && p1.second <= p2.second;
}

vector<pair<int, int>> MakeInitialPairs(const vector<int> &offsets, int note1,
                                        int note2) {
        auto ret = vector<pair<int, int>>();
        if (note1 < note2) {
                auto aux = note1;
                note1 = note2;
                note2 = aux;
        }
        for (int i = 0; i < 6; ++i) {
                for (int j = 0; j < 6; ++j) {
                        auto p1 = pair(note1 - offsets[i], note2 - offsets[j]);
                }
        }
}

void MakeNextPairs(std::vector<pair<int, int>> &pairs) {}

int main() {
        auto offsets = vector<int>(6);
        for (int i = 0; i < 6; ++i)
                cin >> offsets[i];
        sort(offsets.begin(), offsets.end());
        int n_notes;
        cin >> n_notes;
        auto notes = vector<int>(n_notes);
        for (int i = 0; i < n_notes; ++i)
                cin >> notes[i];
        return 0;
}