class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        string temp = "";
        string num = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                num += s[i];  // Build the repeat number
            }
            else if (s[i] == '[') {
                st.push(num);  // Push the repeat count
                st.push("[");  // Marker for start of substring
                num = "";      // Reset num
            }
            else if (s[i] == ']') {
                temp = "";
                while (!st.empty() && st.top() != "[") {
                    temp = st.top() + temp;
                    st.pop();
                }

                if (!st.empty() && st.top() == "[") st.pop(); // Remove '['
                
                string repeatStr = "";
                if (!st.empty()) {
                    repeatStr = st.top();
                    st.pop();
                }

                int repeat = stoi(repeatStr);
                string expanded = "";
                while (repeat--) expanded += temp;

                st.push(expanded);
            }
            else {
                string ch(1, s[i]);
                st.push(ch);
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
