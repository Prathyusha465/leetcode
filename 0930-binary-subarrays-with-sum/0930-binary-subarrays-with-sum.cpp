class Solution {
public:
    int helper(vector<int>& nums, int goal){
        int i=0,j=0;
        int sum=0;
        int count=0;
        if(goal<0)
            return 0;
        while(j<nums.size()){
            sum=sum+nums[j];
            while(sum>goal)
            {
                sum=sum-nums[i];
                i++;
            }
            count=count+(j-i+1);
            j++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return helper(nums,goal)-helper(nums,goal-1);
    }
};