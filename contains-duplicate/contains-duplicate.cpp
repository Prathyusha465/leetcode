class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m1;
        for(int i=0;i<nums.size();i++)
        {
            if(m1.find(nums[i])!=m1.end())
                return true;
            else
                m1[nums[i]]++;
        }
        return false;
    }
};