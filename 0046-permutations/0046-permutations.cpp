class Solution {
public:
    void helper(vector<int>&nums,vector<vector<int>>&v1,int ind)
    {
        int n=nums.size();
        if(ind==n)
        {
            v1.push_back(nums);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            swap(nums[ind],nums[i]);
            helper(nums,v1,ind+1);
            swap(nums[ind],nums[i]);
        }
        
    }
    vector<vector<int>>permute(vector<int>&nums) {
        vector<vector<int>>v1;
        helper(nums,v1,0);
        return v1;
    }
};
    
  