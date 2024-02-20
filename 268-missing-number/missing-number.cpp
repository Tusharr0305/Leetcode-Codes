class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int totalSum=(n*(n+1))/2;
        for(auto it:nums){
            totalSum-=it;
        }
        return totalSum;
    }
};