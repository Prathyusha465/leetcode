class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>incSub(n,1);
        int maxlen=1;
        int index=-1;
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(nums[i]>nums[j] && 1+incSub[j] > incSub[i]){
                    incSub[i]=1+incSub[j];
                }
            }
            if(maxlen<incSub[i]){
                maxlen=incSub[i];
            }
        }
        return maxlen;
    }
};