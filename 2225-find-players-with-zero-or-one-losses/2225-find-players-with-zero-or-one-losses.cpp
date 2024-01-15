class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       unordered_map<int,int>winner;
       unordered_map<int,int>looser;
        
        for(auto it:matches){
            winner[it[0]]++;
            looser[it[1]]++;
        }
        vector<int>zero;
        vector<int>one;
        set<int>s1;
        for(auto it:matches){
            if(winner[it[0]]>=1 && looser.find(it[0])==looser.end())
              s1.insert(it[0]); 
        if(looser[it[1]]==1)
            one.push_back(it[1]);
        }
      for(auto it:s1)
          zero.push_back(it);
        vector<vector<int>>v1;
        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());
        v1.push_back(zero);
        v1.push_back(one);
        return v1;
        
    }
};