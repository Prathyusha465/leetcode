class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int>m1;
        int i=0,j=0;
        int sum=0;
        int maxi=0;
        while(j<nums.size()){
            m1[nums[j]]++;
            sum+=nums[j];
            if(m1[nums[j]]>1){
                while(m1[nums[j]]>1)
                {
                    m1[nums[i]]--;
                     if(m1[nums[i]]==0)
                        m1.erase(nums[i]);
                    sum=sum-nums[i];
                    i++;
                }
            }
            maxi=max(maxi,sum);
            j++;
        }
        return maxi;
    }
};