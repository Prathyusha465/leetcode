class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>m1;
        for(auto it:nums)
        {
            m1[it]++;
        }
        for(auto it:m1)
        {
            if(it.second%2!=0)
                return false;
        }
        return true;
    }
};