class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int num=1;
        int z=0;
        for(auto it:nums)
        {
            if(it!=0)
                num=num*it;
            else
                z++;
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(z<=1)
            {
            if(z==1)
            {
                if(nums[i]!=0)
                    v.push_back(0);
                else
                    v.push_back(num);
            }
                if(!z)
                {
                    v.push_back(num/nums[i]);
                }
            }
            if(z>1)
                v.push_back(0);
            }
        return v;
    }
};