class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        map<int,int>m1;
        for(auto it:nums){
            m1[it]++;
        }
        int n=nums.size()/3;
        for(auto it:m1){
            if(it.second>n)
                ans.push_back(it.first);
        }
        return ans;
    }
};