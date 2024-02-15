class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<long long>prefsum;
        long long int count=0;
        long long int sum=0;
        for(auto it:nums){
            prefsum.push_back(sum);
            sum+=it;
        }
        for(int i=nums.size()-1;i>=2;i--){
            if(nums[i]<prefsum[i])
                return (long long)nums[i]+prefsum[i];
        }
        return -1;
    }
};