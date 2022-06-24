class Solution {
public:
    bool isPossible(vector<int>& t) {
        if (t.size() == 1) return t[0] == 1;
        priority_queue<int, vector<int>> pq(t.begin(), t.end());
        int n = t.size();
        long sum = 0;
        int i;
        for (i=0; i<t.size(); i++) {
            sum += t[i];
        }
        int top = 0;
        while (sum > 0) {
           if (pq.top() == 1) return true;
            top = pq.top();
            pq.pop();
            sum -= top;
            if (sum <= 0 ) return false;
            if (top <= sum) return false;
            top %= sum;
            if (top == 0) {
                if (pq.size() == 1) {
                    return pq.top() == 1;
                }
                return false;
            }
            
            pq.push(top);
            sum += top;
        }
        return true;
 
    }
};