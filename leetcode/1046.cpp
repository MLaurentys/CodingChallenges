// https://leetcode.com/problems/last-stone-weight/

#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int st : stones)
            pq.push(st);
        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if (a!=b)
                pq.push(a-b);
        }
        if(pq.size())
            return pq.top();
        return 0;
    }
};