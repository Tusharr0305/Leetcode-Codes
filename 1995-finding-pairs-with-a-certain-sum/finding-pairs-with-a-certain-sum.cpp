class FindSumPairs {
public:
    unordered_map<int,int> freq;
    vector<int> arr1,arr2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(auto it:nums2) freq[it]++;
        arr1=nums1;
        arr2=nums2;
    }
    
    void add(int i, int val) {
        
        int curr_num=arr2[i];
        int new_val=arr2[i]+val;
        
        if(freq[curr_num]) freq[curr_num]--;
        freq[new_val]++;
        arr2[i]+=val;
        //curr element ka count -1
        //new element ka count +1

    }
    
    int count(int tot) {
        int ans=0;
        for(auto it: arr1){
            if(freq.find(tot-it)!=freq.end())
            ans+=freq[tot-it];
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */