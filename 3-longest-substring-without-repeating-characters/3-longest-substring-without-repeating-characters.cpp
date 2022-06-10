class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int ans = 0;
        unordered_map<char,int> mp;
        int flag = 0;
        while(i < s.size() and j < s.size()){
            if(!flag)
                mp[s[i]]++;
            if(mp[s[i]] > 1){
                ans = max(ans, i-j);
                mp[s[j++]]--;
                flag = 1;
            }
            else{
                i++;
                flag = 0;
            }
        }
        return max(ans, i-j);
    }
};