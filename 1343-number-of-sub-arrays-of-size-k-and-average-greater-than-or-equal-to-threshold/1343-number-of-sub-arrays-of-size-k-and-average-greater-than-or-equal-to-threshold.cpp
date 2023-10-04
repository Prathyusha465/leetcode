class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int i=0;int j=0;
        int sum=0;
        int count=0;
        int n=arr.size();
        while(j<n){
            sum=sum+arr[j];
            if((j-i+1)<k)
                j++;
            else if((j-i+1)==k)
            {
                if(sum/k>=threshold)
                    count++;
                sum=sum-arr[i];
                i++;
                j++;
            }
        }
        return count;
    }
};