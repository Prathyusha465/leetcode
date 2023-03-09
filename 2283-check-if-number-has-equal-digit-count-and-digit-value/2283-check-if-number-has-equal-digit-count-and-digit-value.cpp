class Solution {
public:
    bool digitCount(string num) {
       unordered_map<char,int>m1;
        for(auto it:num)
        {
            m1[it]++;
        }
        for(int i=0;i<num.size();i++)
        {
            if(num[i]!=(m1[i+'0']+'0'))
                return false;
        }
       return true; 
    }
};
// m1[i]==nums[i]