class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mini=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(mini>abs(sum-target)){
                    mini=min(mini,abs(sum-target));
                    ans=sum;
                }
                if(sum==target){
                    j++;
                    k--;
                    
                }
                    
                else if(sum>target)
                    k--;
                else
                    j++;
                
                mini=min(mini,abs(sum-target));
            }
        }
        return ans;
    }
};