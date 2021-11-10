// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = max(nums[0], nums[1]);
        int mxx = min(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); ++i){
            if (nums[i] > mx) {
                mxx = mx;
                mx = nums[i];
            }
            else if (nums[i] > mxx)
                mxx = nums[i];
        }
        return (mx - 1) * (mxx-1);
    }
};