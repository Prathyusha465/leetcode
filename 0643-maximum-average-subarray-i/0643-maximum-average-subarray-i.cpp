class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double ans=0;
        double maxi=INT_MIN;
        int i=0;
        int j=0;
        while(j<nums.size()){
            ans=ans+ (double)nums[j];
            if(j-i+1==k){
                maxi=max(maxi,ans);
                ans=ans-nums[i];
                i++;
            }
            j++;
        }
        return maxi/k;
    }
};

