class Solution {
public:
    bool solve(int n){
        if(n==1)
            return 1;
        if(n==0)
            return 0;
        if(n%2!=0)
            return false;
        return solve(n/2);
    }
    bool isPowerOfTwo(int n) {
        return solve(n);
    }
};