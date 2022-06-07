class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        int currSize = m;
        while(i<currSize && j<n){
            if(nums1[i]>nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                currSize++;
                j++;
            }
            else i++;
        }
        while(j<n){
              nums1[i]=nums2[j];
              j++;
              i++;
        }
        while(currSize>m){
            currSize--;
            nums1.pop_back();
        }
        return;
    }
};