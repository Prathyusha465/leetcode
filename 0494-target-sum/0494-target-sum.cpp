class Solution {
public:
    int ans=0;
    void helper(vector<int>&nums,int target,int ind,int t){
        if(ind==nums.size()){
            if(target==t)
                ans++;
             return;   
                
        }
        helper(nums,target,ind+1,t-nums[ind]);
        helper(nums,target,ind+1,t+nums[ind]);

        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
         helper(nums,target,0,0);
        return ans;
    }
};