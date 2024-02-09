class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
      vector<int>incLength(n,1),prevIndex(n,-1);
      int maxLength=0;
        int index=1;
      for(int i=0;i<n;i++){
          for(int j=i-1;j>=0;j--){
              if(nums[i]%nums[j]==0 && 1+incLength[j]>incLength[i]){
                  incLength[i]=1+incLength[j];
                  prevIndex[i]=j;
              }
          }
          if(maxLength<incLength[i]){
                maxLength=incLength[i];
                index=i;
            }
      }
        
    vector<int>ans;
        while(index!=-1){
            ans.push_back(nums[index]);
            index=prevIndex[index];
        } 
        return ans;
    }
};