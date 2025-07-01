class Solution {
public:
    vector<vector<int>> generate(int n) {
        if (n==1) return {{1}};
        if(n==2) return {{1},{1,1}};

        vector<vector<int>> ans;
        ans.push_back({1});
        ans.push_back({1,1});
        n-=2;
        vector<int> temp;
        while(n--){
            temp.push_back(1);
            for(int i=1;i<ans.back().size();i++){
                temp.push_back(ans.back()[i]+ans.back()[i-1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};