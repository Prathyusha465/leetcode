class Solution {
public:
    int minDeletions(string s) {
        vector<int>v(26,0);
        for(auto it:s)
            v[it-'a']++;
        sort(v.begin(),v.end());
        int count=0;
        for(int i=24;i>=0;i--)
        {
            if(v[i]==0)
                break;
            else if(v[i]>=v[i+1]){
                int temp=v[i];
                v[i]=max(0,v[i+1]-1);
                count+=temp-v[i];
            }
            
        }
        return count;
    }
};