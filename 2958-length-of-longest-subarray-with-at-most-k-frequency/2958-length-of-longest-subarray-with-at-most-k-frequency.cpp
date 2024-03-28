class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>m1;
        int i=0,j=0;
        int ans=0;
        while(j<nums.size()){
            m1[nums[j]]++;
            while(m1[nums[j]]>k){
                m1[nums[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};