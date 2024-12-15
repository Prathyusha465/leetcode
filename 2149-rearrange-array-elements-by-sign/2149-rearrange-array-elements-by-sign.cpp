class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int countp=0;
        int countn=1;
        map<int,int>m1;
        for(auto it:nums){
            if(it>0){
                m1[countp]=it;
                countp+=2;
            }
            else{
                m1[countn]=it;
                countn+=2;
            }
        }
       for(int i=0;i<nums.size();i++){
           nums[i]=m1[i];
       } 
        return nums;
    }
};