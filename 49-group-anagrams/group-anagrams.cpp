class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        //store in map as-> sorted_string and unsorted
        // triverse in map and return ans
        unordered_map<string,vector<string>> mp;

        for(auto it: str){
            string temp=it;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(it);
        }
        vector<vector<string>> ans;
        for(auto it :mp){
            ans.push_back(it.second);
        }
        return ans;

    }
};