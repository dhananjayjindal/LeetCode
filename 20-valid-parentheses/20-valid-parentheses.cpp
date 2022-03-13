class Solution {

public:
    bool isValid(string s) {
        stack<char>a;
        for(int i=0; i<s.length(); i++){
	
            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
                a.push(s[i]);
            
            else if(a.empty()==true)
            {
                return false;
            }

            else if(s[i]==')')
            {
                if(a.top()=='(')
                a.pop();
                else
                return false;
            }

            else if(s[i]=='}')
            {
                if(a.top()=='{')
                a.pop();
                else
                return false;
            }

            else if(s[i]==']')
            {
                if(a.top()=='[')
                a.pop();
                else
                return false;
            }

        }
        if (a.empty())
        return true;
        else
        return false;
    }
};