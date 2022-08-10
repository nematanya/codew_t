/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  TreeNode* solve(int left, int right, vector<int>& nums){
        if(right<left)return nullptr;
        int mid = left + (right - left)/2;
        return new TreeNode(nums[mid],solve(left, mid-1, nums),solve(mid+1, right, nums));
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve( 0, nums.size()-1, nums);
    }
};