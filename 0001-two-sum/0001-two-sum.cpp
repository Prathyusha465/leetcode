class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v1;
     int n=nums.size();
        map<int,int>m1;
        for(int i=0;i<n;i++)
        {
            int t=(target-nums[i]);
            if(m1.find(t)!=m1.end())
            {
                v1.push_back(m1[t]);
                v1.push_back(i);
            }
            m1[nums[i]]=i;
        }
        return v1;
            }
        };