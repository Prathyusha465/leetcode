class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m1;
        for(auto it:nums1)
            m1[it]++;
        for(auto it:nums2){
            if(m1.find(it)!=m1.end())
                return it;
        }
        return -1;
    }
};