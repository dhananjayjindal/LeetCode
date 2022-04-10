class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int seclast;
        for (string s : ops)
        {
            if (s == "C")
            {
                st.pop();
            }
            else if (s == "D")
            {
                st.push(2 * st.top());
            }
            else if (s == "+")
            {
                int last = st.top(); // 5
                st.pop();
                seclast = st.top(); // 9
                st.push(last);
                st.push(last + seclast);
            }
            else
            {
                st.push(stoi(s));
            }
        }
        int sum = 0;
        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum; 
    }
};