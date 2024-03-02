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
    // even level me odd honge and vo srictly inc honge 
    // odd wale me dec honge and numbers even honge
    
    void solve(TreeNode* root,int level,map<int,vector<int>> &mp){
        if(root==NULL)
            return ;
        mp[level].push_back(root->val);
        solve(root->left,level+1,mp);
        solve(root->right,level+1,mp);
        
    }
    
    bool isEvenOddTree(TreeNode* root) {
        map<int,vector<int>> mp;
        solve(root,0,mp);
        for(auto it:mp){
            if(it.first%2==0){
                if(it.second[0]%2==0) return false;
                for(int i=1;i<it.second.size();i++){
                    if(it.second[i-1]>=it.second[i]||it.second[i]%2==0||it.second[i-1]%2==0)
                        return false;
                    
                }
            }
            else{
                if(it.second[0]%2!=0) return false;
                for(int i=1;i<it.second.size();i++)
                    if(it.second[i-1]<=it.second[i]||it.second[i]%2!=0||it.second[i-1]%2!=0)
                        return false;
            }
            
        }
        return true;
    }
};