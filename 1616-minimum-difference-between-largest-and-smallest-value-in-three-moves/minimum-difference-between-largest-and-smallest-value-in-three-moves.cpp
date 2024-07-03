class Solution {
public:
    
    int solve(vector<int> &nums,int i,int j,int moves){
        //out of moves now
        if(moves==0){
            return nums[j]-nums[i];
            
        }
        //now have 2 options either romove i or j
        return min(solve(nums,i+1,j,moves-1),solve(nums,i,j-1,moves-1));
    }
    
    int minDifference(vector<int>& nums) {
       if(nums.size()<5)
           return 0;
     sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1;
        int ans=INT_MAX;
        return solve(nums,i,j,3);
        
    }
    
};