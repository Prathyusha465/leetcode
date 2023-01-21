class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int i=0;
     int j=nums.size()-1;
      if(nums[0]>target)
         return 0;
      if(nums[j]<target)
          return j+1;
     if(nums[0]==target) 
        return 0;
     if(nums[j]==target) 
         return j;
     while(i<=j) 
     {
        int mid=i+(j-i)/2;
      if(nums[mid]==target) 
          return mid;
     if(nums[mid]>target && nums[mid-1]<target) 
        return mid;
     if(nums[mid]<target&& nums[mid+1]>target)
        return mid+1;
      else if(nums[mid]>target)
         j=mid-1;
      else
         i=mid+1;
     }
           
return 0;
    }
};