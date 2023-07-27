class Solution {
public:
    void helper(vector<int>& candidates,int target,vector<vector<int>>&v1,vector<int>&v2,int sum,int i){
        if(i==candidates.size())
        {
            if(target==0)
            {
                v1.push_back(v2);
            }
            return;
        }
        
        
          helper(candidates,target,v1,v2,sum,i+1);
          if(candidates[i]<=target)
          {
            v2.push_back(candidates[i]);
            helper(candidates,target-candidates[i],v1,v2,sum+candidates[i],i);
            v2.pop_back();
          }
   
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>v1;
        vector<int>v2;
        helper(candidates,target,v1,v2,0,0);
        return v1;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};