class Solution {
public:
    int minPartitions(string n) {
        map<int,int>m1;
        for(int i=0;i<n.size();i++)
        {
            m1[n[i]-'0']=1;
        }
        int maxi=0;
        for(auto it:m1)
            maxi=max(maxi,it.first);
        return maxi;
    }
};