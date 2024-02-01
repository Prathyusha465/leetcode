class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
     vector<vector<int>>ans;
        bool flag=true;
     sort(nums.begin(),nums.end());
      int n=nums.size();
        vector<int>temp;
    for(int i=0;i<n;i=i+3){
        if((nums[i+2]-nums[i])>k)
        {
             flag=false;
             break;
        }
        else{
           vector<int>v;
            v.push_back(nums[i]);
            v.push_back(nums[i+1]);
            v.push_back(nums[i+2]);
            ans.push_back(v);
            v.resize(0);
        }
         
    }
        vector<vector<int>>emp;
       if(flag==false)
           return emp;
       return ans;
        
    }
};