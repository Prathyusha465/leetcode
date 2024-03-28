class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>s1;
        if(nums[0]>0)
            return {};
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k] ==0){
                    s1.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k] >0)
                    k--;
                else
                    j++;
            }
        }
        for(auto it:s1)
            ans.push_back(it);
        return ans;
    }
};