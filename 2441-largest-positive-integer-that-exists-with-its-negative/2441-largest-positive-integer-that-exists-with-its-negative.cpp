class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        map<int,int>m1;
        for(auto it:nums){
            m1[it]=it;
            if(it>maxi && m1.find((-1)*it)!=m1.end())
                maxi=it;
            if(it<mini && m1.find((-1)*it)!=m1.end())
                mini=it;
        }
        if(maxi==INT_MIN && mini==INT_MAX)
            return -1;
        else if(maxi==INT_MIN || mini==INT_MAX)
            return min(abs(maxi),abs(mini));
        return max(abs(maxi),abs(mini));
    }
 
};