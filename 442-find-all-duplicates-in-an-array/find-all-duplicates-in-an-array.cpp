class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        int i=0;
       sort(nums.begin(),nums.end());
        while(i!=nums.size()-1)
        {         
            if(nums[i]==nums[i+1])
            
                ans.push_back(nums[i]);
                i++;
        }
        return ans;
    }
};