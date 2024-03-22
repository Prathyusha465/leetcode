class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        /*
        int n=nums.size();
        int i=0;
        int j=0;
        double sum=0;
        double ans=INT_MIN;
        while( j<n){
            sum=sum+double(nums[j]);
            if((j-i+1)>k){
                sum=sum-nums[i];
               i++; 
            }
             if((j-i+1)==4){
                ans=max(ans,sum/(double(k)));
            }
            j++;
            
        }
        return ans;
        */
        int i=0;
        int j=0;
        double maxi=INT_MIN;
        int sum=0;
        while(j<nums.size() ) {
            sum+=nums[j];
            if((j-i+1)>k) {     //window size greater than k
                sum-=nums[i];   //remove the ith element from window to maintain size of k
                i++;           
            }
            if((j-i+1)==k) {

                maxi=max(maxi,sum/(double)k);   
            }
          j++;
            
        }
        return maxi;
    }
};

