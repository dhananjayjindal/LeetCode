// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        int i,n=x.length();
        
        
        
        for(i=0;i<n;i++){
            if(s.size()==0){
                if(x[i]==')'||x[i]==']'||x[i]=='}')
                return false;
            }
            
            if(x[i]=='('||x[i]=='['||x[i]=='{')
            s.push(x[i]);
            if(x[i]==')'&& s.top()=='(')
            s.pop();
           else  if(x[i]=='}'&& s.top()=='{')
            s.pop();
            else if(x[i]==']'&& s.top()=='[')
            s.pop();
            else if (x[i]==')'||x[i]==']'||x[i]=='}')
            s.push(x[i]);
            
        }
        if(s.size()==0)
        return true;
        else 
        return false; 
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends