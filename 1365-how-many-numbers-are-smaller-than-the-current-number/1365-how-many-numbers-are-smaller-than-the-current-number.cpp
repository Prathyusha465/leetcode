class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     vector<int>v(nums);
     sort(v.begin(),v.end());
     map<int,int>m1;
   for(int i=0;i<nums.size();i++) 
   {
    if(m1.find(v[i])==m1.end())
       m1[v[i]]=i;
      }
      vector<int>ans;
    for(int i=0;i<nums.size();i++) 
    {
       ans.push_back(m1[nums[i]]);
    }
     return ans;
    }
};