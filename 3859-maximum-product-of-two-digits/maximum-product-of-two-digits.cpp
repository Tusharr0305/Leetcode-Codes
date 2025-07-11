class Solution {
public:
    int maxProduct(int n) {
        priority_queue<int> pq;
        string s= to_string(n);
        for(auto it:s) pq.push(it);

        char m1=pq.top();
        pq.pop();
        char m2=pq.top();

        int m3=m1-'0';
        int m4=m2-'0';

        return m3*m4;
         
    }
};