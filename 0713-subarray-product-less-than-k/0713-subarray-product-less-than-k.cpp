class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        long long int mul=1;
        int ans=0;
        int n=nums.size();
        
        if(k<=0){
            return 0;
        }
        while(j<n){
          mul=mul*nums[j];
            
         while(i<j && mul>=k){
            mul=mul/nums[i];
            i++;
             
                }
           if(mul<k) 
           ans=ans+j-i+1;
            j++;
        
        }
        return ans;
    }
};