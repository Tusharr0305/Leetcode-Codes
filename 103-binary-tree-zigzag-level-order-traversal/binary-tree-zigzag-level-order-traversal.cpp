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
    void sol(int lvl,map<int,vector<int>> &mp,TreeNode* root){
    if(root==NULL) return;

    mp[lvl].push_back(root->val);
    sol(lvl +1,mp,root->left);
    sol(lvl +1,mp,root->right);
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        map<int,vector<int>> mp;
        vector<vector<int>> ans;
        // vector<int> temp;
        sol(0,mp,root);
        int n=mp.size();
        for(int i=0;i<n;i++){
          if(i%2==0)
          ans.push_back(mp[i]);
          else{
            reverse(mp[i].begin(),mp[i].end());
            ans.push_back(mp[i]);
          }  
        } 
        return ans;
    }
};