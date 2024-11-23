class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       int sum=0;
        map<int,int>m1;
        m1[0]=1;
        int count=0;
        for(auto it:nums){
            sum=sum+it;
            int temp=sum-k;
            if(m1.find(temp)!=m1.end())
            {
                count+=m1[temp];
                
            }
            m1[sum]++;
        }
        return count;
    }
};