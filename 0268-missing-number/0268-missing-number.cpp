class Solution {
public:
    int missingNumber(vector<int>& nums) {
       map<int,int>m1;
        for(auto it:nums){
           m1[it]++;
       } 
       for(int i=0;i<=nums.size();i++){
           if(m1.find(i)==m1.end())
               return i;
       }
        return -1;
    }
};