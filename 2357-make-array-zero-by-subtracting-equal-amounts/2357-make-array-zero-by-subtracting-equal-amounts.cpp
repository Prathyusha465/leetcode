class Solution {
public:
    int minimumOperations(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0)
        {
            ans++;
            int temp=nums[i];
            for(int j=i;j<n;j++)
            {
              nums[j]=nums[j]-temp;
            }
        }
    }
    return ans;

    }
};