class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       map<int,int>m1;
        vector<string>ans;
        for(auto it:target){
            m1[it]++;
        }
        int last=target[target.size()-1];
        for(int i=1;i<=last;i++){
            if(m1.find(i)!=m1.end()){
                ans.push_back("Push");
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};