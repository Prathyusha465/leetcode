class Solution {
public:
    void helper(vector<int>& candidates, int target,int sum,vector<int>sub,vector<vector<int>>&v1,int ind)
    {
        
            if(target==0)
            {
                v1.push_back(sub);
                return;
            }
        for(int i=ind;i<candidates.size();i++)
        {
            
            if(i>ind && candidates[i]==candidates[i-1])
                continue;
            if(target>=candidates[i])
            {
                sub.push_back(candidates[i]);
                helper(candidates,target-candidates[i],sum+candidates[i],sub,v1,i+1);
                sub.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>sub;
        vector<vector<int>>v1;
        helper(candidates,target,0,sub,v1,0);
        return v1;
    }
};