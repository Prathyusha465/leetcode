class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int>m1;
        for(auto it:target){
            m1[it]++;
        }
        for(auto it:arr){
            m1[it]--;
            if(m1[it]==0)
                m1.erase(it);
        }
        return m1.size()==0;
    }
};