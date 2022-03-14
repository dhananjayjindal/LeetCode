class Solution {
public:
    string simplifyPath(string path) {
          string res="";
    int n = path.length();

    
    stack<string> stk;
    
    for(int i=0;i<n;i++) {
        
        if(path[i]=='/')
            continue;
        
        string tmpPath = "";
        
        while(i<n && path[i]!='/')
            tmpPath+=path[i++];
        
        if(tmpPath==".")
            continue;
        
        else if(tmpPath==".."){ // going one directory up.
            if(!stk.empty())
                stk.pop();
        }
        else // also taking care of this care when (/..someFileName or /...someFileName) this is a valid file.
            stk.push(tmpPath);
    }
    string ans="";
    while(!stk.empty()){
        ans="/"+stk.top()+ans; // inserting in the begining.
        stk.pop();
    }
    
    return (ans==""?"/":ans); // when the stack is empty in this case ( /////// or /../ )
}  
    
};