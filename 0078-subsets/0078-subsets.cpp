class Solution {
public:
    
    void helper(vector<int>& nums,int i,vector<int>sub,vector<vector<int>>&ans)
    {
        if(i>=nums.size())
        {
            ans.push_back(sub);
            return;
        }
        helper(nums,i+1,sub,ans);
        sub.push_back(nums[i]);
        helper(nums,i+1,sub,ans);
        sub.pop_back();
        
            
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        int n=nums.size();
        helper(nums,0,sub,ans);
        return ans;
    }
};
