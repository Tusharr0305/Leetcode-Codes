class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
        stack<char> st;
        int i=0;
        int n=word.size();
        while(ch!=word[i]&&i<n){
            st.push(word[i++]);
        }
        if(i>=n)
            return word;
        else
            st.push(word[i++]);
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        while(i!=n)
            ans+=word[i++];
        return ans;
    }
};