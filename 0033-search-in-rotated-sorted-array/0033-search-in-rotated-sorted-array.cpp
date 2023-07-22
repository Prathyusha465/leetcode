class Solution {
public:
    int search(vector<int>& nums, int target) {
      int s=0;
      int end=nums.size()-1;
      while(s<=end)
      {
          int mid=s+(end-s)/2;
          if(nums[mid]==target)
              return mid;
          else if(nums[mid]>=nums[s])
          {
              if(nums[s]<=target && nums[mid]>target)
              {
                  end=mid-1;
              }
              else
              {
                  s=mid+1;
              }
          }
          else
          {
              if(nums[mid]<target && nums[end]>=target)
                  s=mid+1;
              else
                  end=mid-1;
          }
      }
        return -1;
    }
};