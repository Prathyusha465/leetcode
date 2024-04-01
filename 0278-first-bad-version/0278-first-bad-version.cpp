// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=0;
        int j=n-1;
        int ans=n;
        while(i<=j){
            int mid= i+(j-i)/2;
            if(isBadVersion(mid)==true){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};