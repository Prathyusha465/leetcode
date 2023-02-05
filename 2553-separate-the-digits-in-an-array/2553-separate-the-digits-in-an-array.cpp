class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i=nums.size()-1;i>=0;i--)
        {
            int n=nums[i];
            while(n)
            {
                v.push_back(n%10);
                n=n/10;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};