class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        int n=nums.size();
        int ans=0;
        for(auto it:nums)
            m1[it]++;
        int i=0,j=0;
        while(j<n){
           m2[nums[j]]++;
            if(m2.size()==m1.size()){
                while(m2.size()==m1.size())
                {
                    ans=ans+n-j;
                    m2[nums[i]]--;
                    if(m2[nums[i]]==0)
                        m2.erase(nums[i]);
                    i++;
                }
            }
            j++;
            
        }
        return ans;
    }
};