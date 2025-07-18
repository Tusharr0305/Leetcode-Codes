class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
         mp[nums[i]]=i;
     }  
        for(int i=0;i<nums.size();i++){
            int element=nums[i];
            if(mp.find(target-element)!=mp.end()){
                auto it=mp[(target-element)];
                if(it!=i)
                return{i,it};
            }
        }
        return {0,0};
    }
};