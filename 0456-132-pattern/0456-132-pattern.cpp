class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector<int>prev,next;
        stack<int>st;
        int n=nums.size();
        int third=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<third)
                return true;
            while(!st.empty() && nums[i]>st.top()){
                third=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};