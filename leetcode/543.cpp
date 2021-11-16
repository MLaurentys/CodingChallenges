// https://leetcode.com/problems/diameter-of-binary-tree/

#include <algorithm>

using namespace std;

struct path{
    int max_path;
    int max_height;
    path(int a, int b) {max_path = a; max_height = b;}
};

class Solution {
public:
    path max_path_rec(TreeNode* node) {
        if (node == nullptr) return {0,0};
        path mL = max_path_rec(node->left);
        path mR = max_path_rec(node->right);
        int mh = max(mL.max_height, mR.max_height);
        int mp = max(mL.max_path, mR.max_path);
        mp = max(mp, mL.max_height + mR.max_height);
        return {mp, mh + 1};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        path ret = max_path_rec(root);
        return ret.max_path;
    }
};