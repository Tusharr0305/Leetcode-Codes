class Solution {
public:
    typedef long long ll;
    long long largestPerimeter(vector<int>& nums) {
        vector<ll> pSum;
        sort(nums.begin(),nums.end());
        ll sum=0;
        for(auto it: nums){
            sum+=it;
            pSum.push_back(sum);
        }
        for(int i=nums.size()-1;i>=2;i--){
            if(pSum[i-1]>nums[i])
                return pSum[i-1]+nums[i];
        }
        return -1;
    }
};