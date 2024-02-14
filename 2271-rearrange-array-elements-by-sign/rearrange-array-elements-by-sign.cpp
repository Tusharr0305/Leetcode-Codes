class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i=0,j=1,n=0;
       while( n<nums.size()){
           if(nums[n]>=0)
           {ans[i]=nums[n];
           i+=2;}
           else
           {ans[j]=nums[n];
           j+=2;}
           n++;
       }
        return ans;
    }
};