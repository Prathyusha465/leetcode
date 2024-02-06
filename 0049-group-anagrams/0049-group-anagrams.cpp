class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>m1;
        for(auto it : strs){
            string temp=it;
            sort(temp.begin(),temp.end());
            m1[temp].push_back(it);
        }
        for(auto it:m1){
            ans.push_back(it.second);
        }
        return ans;
    }
};