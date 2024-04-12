class Solution {
public:
    int trap(vector<int>& height) {
       
        int n=height.size();
        vector<int>left(n,0),right(n,0);
        int maxil=INT_MIN;
        int maxir=INT_MIN;
        for(int i=0;i<n;i++){
            maxil=max(maxil,height[i]);
            left[i]=maxil;
        }
         for(int i=n-1;i>=0;i--){
            maxir=max(maxir,height[i]);
            right[i]=maxir;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+min(left[i],right[i])-height[i];
        }
        return ans;
    }
};