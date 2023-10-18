class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        int czero=0;
        int maxi=0;
        while(j<nums.size()){
            if(nums[j]==0)
                czero++;
            if(czero<=k)
            {
                maxi=max(maxi,j-i+1);
            }
            else if(czero>k){
                while(czero>k){
                    if(nums[i]==0)
                        czero--;
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }
};