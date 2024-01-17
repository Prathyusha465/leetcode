class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map<int,int>m1;
        set<int>s1;
        for(auto it:arr)
            m1[it]++;
        for(auto it:m1){
            if(s1.find(it.second)==s1.end())
                s1.insert(it.second);
            else
                return false;
        }
        return true;
    }
};