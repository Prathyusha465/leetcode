class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m1;
        int count=0;
        int ele=-1;
        sort(nums.begin(),nums.end());
        for(auto it:nums)
        {
            m1[it]++;
            if(it%2==0 && m1[it]>count)
            {
                count=m1[it];
                ele=it;
            }
        }
        return ele;
    
    }
};