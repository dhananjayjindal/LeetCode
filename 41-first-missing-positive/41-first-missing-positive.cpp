class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int min = INT_MAX;
        for(auto i:nums){
            if(i <= 0) continue;
            s.insert(i);
            if(i < min) min = i;
        }
        
        if(min > 1) return 1;
        for(int i = 0 ; i< nums.size(); i++){
            if(s.find(++min) == s.end()) return min;
        }
        return 0;
    }
};