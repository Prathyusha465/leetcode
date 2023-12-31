class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4)
            return 0;
        sort(nums.begin(),nums.end());
    int anse=min(abs(nums[n-1]-nums[3]),abs(nums[0]-nums[n-4]));
    int ansm=min(abs(nums[2]-nums[n-2]),abs(nums[n-3]-nums[1]));
        
    
        
    
        return min(anse,ansm);

    }
};