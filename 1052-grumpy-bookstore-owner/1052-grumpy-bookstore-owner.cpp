class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum=0;
        int j=0,i=0;
        int maxi=0;
        int n=customers.size();
        for(int i=0;i<n;i++){
            if(grumpy[i]==0)
                 sum=sum+customers[i];
        }
           
        i=0;
        while(j<n){
            if(grumpy[j]==1)
                sum=sum+customers[j];
            if((j-i+1)==minutes){
                maxi=max(maxi,sum);
                if(grumpy[i]==1)
                    sum=sum-customers[i];
                i++;
            }
            j++;
        }
       return maxi;
    }
};