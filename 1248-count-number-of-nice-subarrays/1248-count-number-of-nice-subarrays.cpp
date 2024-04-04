class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count=0;
        int i=0;
        int j=0;
        int ans=0;
        int countodd=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]%2==1){
                countodd++;
                count=0;
            }
                
            while(countodd==k){
                if(nums[i]%2==1)
                    countodd--;
                i++;
                count++;
            }
           ans=ans+count;
            j++;
        }
        return ans;
    }
};

