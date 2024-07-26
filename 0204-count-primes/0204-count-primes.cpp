class Solution {
public:
   
    int countPrimes(int n) {
       vector<bool>nums(n+1,true);
       
        nums[0]=false;
        nums[1]=false;
        for(int i=2;i*i<=n;i++){
            if(nums[i]){
               
               for(int j=i*i;j<=n;j=j+i){
                   nums[j]=0;
               } 
            }
        }
       
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i])
                count++;
        }
        return count;
    }
};