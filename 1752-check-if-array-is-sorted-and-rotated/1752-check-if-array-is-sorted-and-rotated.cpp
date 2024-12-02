class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1])
                continue;
            else 
                count++;
        }
        if(nums[0]<nums[n-1])
            count++;
        cout<<"count "<<count<<endl;
        if(count==0 || count==1)
            return true;
        return false;
    }
};