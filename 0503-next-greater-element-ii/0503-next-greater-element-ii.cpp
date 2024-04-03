class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       stack<int>st;
        vector<int>ans;
        int n=nums.size();
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n])
                st.pop();
            if(i<n){
                if(st.empty())
                ans.push_back(-1);
            else
                ans.push_back(st.top()); 
            }
            st.push(nums[i%n]);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};