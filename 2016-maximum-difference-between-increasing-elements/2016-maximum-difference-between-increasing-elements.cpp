class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=-1;
        for(int i=0;i<nums.size();i++)
        {
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]-mini);
        }
        if(!maxi)
            return -1;
        return maxi;
    }
};