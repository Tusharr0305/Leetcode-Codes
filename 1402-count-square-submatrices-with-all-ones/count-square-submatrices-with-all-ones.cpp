class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
       // algo 
       // go to every on and find for how many sq it is the bottom right one
       // how? find the min of left up and digonaly up and the min will show kitne square ban sakte hai

       vector<vector<int>> arr(matrix.size(),vector<int>(matrix[0].size(),0));
       for (int i=0;i<matrix.size();i++)
           arr[i][0]=matrix[i][0]; 
       for (int i=0;i<matrix[0].size();i++)
           arr[0][i]=matrix[0][i];

       for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
             if(matrix[i][j]==1){
                arr[i][j]=1+min(arr[i][j-1],min(arr[i-1][j],arr[i-1][j-1]));
             }   
            }
       }    
       int ans=0;
       for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[0].size();j++)
            ans+=arr[i][j];
      
      return ans;
    }
};