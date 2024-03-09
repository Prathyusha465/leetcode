class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m1;
        int maxi=-1;
        int num=0;
        for(auto it:nums){
            m1[it]++;
            maxi=max(maxi,m1[it]);
        }
        for(auto it:m1){
            if(it.second==maxi)
                num+=it.second;
        }
        return num;
    }
};