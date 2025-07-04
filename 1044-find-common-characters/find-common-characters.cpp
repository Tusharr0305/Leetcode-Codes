class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<vector<int>> count(words.size(),vector<int>(26,0));
        for(int i=0;i<words.size();i++){
            for(auto it: words[i]){
                count[i][it-'a']++;
                cout<<it-'a'<<" ";
            }
            cout<<endl;
        }
        vector<string> ans; //(26,"");
        for(int i=0;i<26;i++){
            int mini= INT_MAX;
            int present=0;
            for(int j=0;j<words.size();j++){
                if(count[j][i]){
                    present++;
                    mini = min(mini,count[j][i]);
                }
            }
            //  cout<<mini<<" ";
            if(mini ==INT_MAX || present<words.size()) continue;
            while(mini--){
                string temp="";
                temp.push_back('a'+i);
                ans.push_back(temp);
            } 
            
            
        }
        return ans;
    }
};