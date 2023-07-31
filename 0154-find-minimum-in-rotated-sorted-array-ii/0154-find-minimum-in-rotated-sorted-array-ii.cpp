class Solution {
public:
    int findMin(vector<int>& nums) {
       int end=nums.size()-1;
        int s=0;
        while(s<end)
        {
            int mid=s+(end-s)/2;
            if(nums[mid]>nums[end]){
                s=mid+1;
            }
            else if(nums[mid]<nums[end])
            {
                end=mid;
            }
            else{
                end--;
            }
                
        }
        return nums[end];
        }
};