class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        map<int,int>m1;
        for(auto it:arr1)
            m1[it]++;
        for(auto it:arr2){
            if(m1.find(it)!=m1.end()){
                int len=m1[it];
               for(int i=0;i<len;i++) {
                   ans.push_back(it);
                   m1[it]--;
               }
            }
        }
        for(auto it:m1){
            if(it.second>0){
                for(int i=0;i<it.second;i++){
                    ans.push_back(it.first);
                }
            }
        }
        
        return ans;
    }
};