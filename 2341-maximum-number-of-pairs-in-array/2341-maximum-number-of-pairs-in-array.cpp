class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>m1;
        vector<int>v;
        for(auto it:nums)
            m1[it]++;
        int pair=0;
        int left=0;
        for(auto it:m1)
        {
            if(it.second%2==0)
                pair=pair+it.second/2;
            else
            {
                pair=pair+it.second/2;
                left++;
                
            }
        }
        v.push_back(pair);
         v.push_back(left);
    return v;
    }
};