class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int p) {
        int s=0;
        sort(token.begin(),token.end());
        int i=0,j=token.size()-1;
        int maxi=0;
        while(i<=j){
            // power gain kerwana padega
            if(p<token[i]){
                // maxi=max(maxi,s);
                if(s==0)
                    return maxi;
                s--;
                p+=token[j--];
            }
            else if(p>=token[i]){
                s++;
                p-=token[i++];
                maxi=max(maxi,s);
            }
        }
        return maxi;
    }
};