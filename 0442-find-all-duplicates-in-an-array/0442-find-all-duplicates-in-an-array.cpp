class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        map<int,int>m1;
        for(auto it:nums){
            if(m1.find(it)!=m1.end()){
                v.push_back(it);
            }
            m1[it]++;
        }
        return v;
    }
};