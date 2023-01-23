class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>m1;
        int count=0;
        for(auto it:jewels)
            m1[it]++;
        for(auto it:stones)
        {
            if(m1.find(it)!=m1.end())
                count++;
        }
        return count;
    }
};