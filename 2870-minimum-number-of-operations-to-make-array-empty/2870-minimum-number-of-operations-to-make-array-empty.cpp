class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m1;
        for(auto it:nums)
        {
            m1[it]++;
        }
        int count=0;
        for(auto it:m1)
        {
          if(it.second==1)
              return -1;
          if(it.second%3==0)
              count=count+it.second/3;
          else
          {
              count=count+it.second/3+1;
          }
                
        }
       return count; 
    }
};