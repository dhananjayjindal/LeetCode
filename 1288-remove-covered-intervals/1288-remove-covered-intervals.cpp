class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        //this loop need not iterate for n^2 times because we have done sorting beforehand
        for(int i=0; i<intervals.size(); i++)
            for(int j=i+1; j<intervals.size(); j++){        
                if(intervals[i][0]==intervals[j][0] && intervals[i][1]<=intervals[j][1]){
                    // for example [1,2] & [1,4] (this case needs to be taken separately 
					//since trend is different in sorting when elements at 0th index are same)
                    intervals.erase(intervals.begin()+i);
                    i--;
                    break;
                }
                else if(intervals[i][1]>=intervals[j][1]){
                    // for example [1,2] & [3,4]
                    intervals.erase(intervals.begin()+j);
                    i--;
                    break;
                }
            }
                
        return intervals.size();
    }
};