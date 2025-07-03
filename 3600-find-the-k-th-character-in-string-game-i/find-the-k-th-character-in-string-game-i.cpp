class Solution {
public:
    string getString(string curr,int n){
        if(n==1) return curr;
         string news="";
         news=curr;
        for(int i=0;i<curr.size();i++){
          int word=((curr[i]-'a')%26 +1)%26;
          news+=('a'+word);
        }
        
        news=getString(news,n-1);
        
        return news;
    }
    char kthCharacter(int k) {
        string temp="";
        //temp=getString("a",k);
        return  'a' + popcount((uint)k-1);
        return temp[k-1];
    }
};