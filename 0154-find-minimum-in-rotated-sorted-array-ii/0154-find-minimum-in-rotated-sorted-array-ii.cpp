class Solution {
public:
    int findMin(vector<int>& nums) {
       int end=nums.size()-1;
        int s=0;
        int ans=INT_MAX;
        while(s<end)
        {
            int mid=s+(end-s)/2;
            if(nums[mid]>nums[end]){
                ans=min(ans,nums[s]);
                s=mid+1;
            }
            else if(nums[mid]<nums[end])
            {
                ans=min(ans,nums[mid]);
                end=mid;
            }
            else{
                end--;
            }
                
        }
        return nums[end];
        /*int lo = 0, hi = nums.length - 1;
        
        if (nums[lo] < nums[hi]) return nums[lo];
        
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            
            if (nums[mid] > nums[hi]) {
                lo = mid + 1;
            } else if (nums[mid] < nums[hi]) {
                hi = mid;
            } else {
                hi--;
            }
        }*/
        
    }
};