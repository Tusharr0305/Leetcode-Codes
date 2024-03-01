class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one=0,zero=0;
        for(auto it:s){
            if(it=='0')
                zero++;
            else
                one++;
        }
        string temp="";
        for(int i=0;i<one-1;i++)
            temp+='1';
        for(int i=0;i<zero;i++)
            temp+='0';
        temp.push_back('1');
        return temp;
    }
};