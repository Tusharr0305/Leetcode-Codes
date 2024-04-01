class Solution {
public:
    int lengthOfLastWord(string s) {
       int ans=0,cnt=0;
        bool prev=0;
        for(auto it:s){
            if(it==' '){
                cnt=0;
            }else{
                cnt++;
                ans=cnt;
            }    
        }
        return ans;
    }
};