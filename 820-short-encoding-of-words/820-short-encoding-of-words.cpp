class Solution {
    static bool myLogic(string &a, string &b) {
        return a.size()>b.size();
    }
public:
    int minimumLengthEncoding(vector<string>& words) {
        int n=words.size();
        if(n==1) return words[0].size()+1;
        sort(words.begin(), words.end(), myLogic);
        unordered_map<string, int> m;
        for(int i=0; i<n; i++) {
            string str=words[i]+'#';
            if(!m.count(str)) {
                for(int j=words[i].size()-1; j>0; j--) {
                    string temp=words[i].substr(j)+'#';
                    m[temp]=1;
                }
                m[str]=-1;
            }
        }
        int ans=0;
        for(auto it:m) {
            if(it.second==-1) ans+=it.first.size();
        }
        return ans;
    }
};