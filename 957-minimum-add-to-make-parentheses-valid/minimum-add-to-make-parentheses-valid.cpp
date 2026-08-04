class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int unmatched=0;
        for(auto ch:s)
        {
            if(ch=='(')
            {
                st.push(ch);
            }
            if(ch==')')
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    unmatched++;
                }
            }
        }
        return st.size() + unmatched;
        
    }
};