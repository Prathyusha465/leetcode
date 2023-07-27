class Solution {
public:
    void helper(vector<int>& nums,vector<int>&sub, vector<vector<int>>&v,int i)
    {
            v.push_back(sub);
        for(int a=i;a<nums.size();a++)
        {
            if(a>i && (nums[a]==nums[a-1]))
                continue;
            sub.push_back(nums[a]);
            helper(nums,sub,v,a+1);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        vector<int>sub;
        helper(nums,sub,v,0);
        return v;
    }
};