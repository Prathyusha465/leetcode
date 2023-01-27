class Solution {
public:
    int minimumOperations(vector<int>& nums) {
     set<int>s;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
                s.insert(nums[i]);
        }
        return s.size();
    }
};