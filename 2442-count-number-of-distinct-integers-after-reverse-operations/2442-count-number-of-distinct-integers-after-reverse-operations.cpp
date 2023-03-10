class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s;
        for(auto it:nums)
           s.insert(it);
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            int ans=0;
            while(temp>0)
            {
                ans=ans*10+temp%10;
                temp=temp/10;
            }
            s.insert(ans);
        }
        return s.size();
    }
};