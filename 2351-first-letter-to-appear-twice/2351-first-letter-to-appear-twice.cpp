class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>m1;
        for(auto it:s)
        {
            m1[it]++;
            if(m1[it]==2)
                return it;
        }
        return -1;
    }
};