class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> ans;
        for(auto it:nums){
            if(st.find(it)!=st.end()){
                ans.push_back(it);
            }
            else
                st.insert(it);
        }
        return ans;
    }
};