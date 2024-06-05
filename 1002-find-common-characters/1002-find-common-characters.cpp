class Solution {
public:
    void recur(string c, int i, vector<string> &words, vector<string> &res){
        if(i>=words.size()){
            res.push_back(c);
            return;
        }
        for(int j=0;j<words[i].size();j++){
            if(words[i][j]==c[0]){
                words[i][j]='.';
                recur(c, i+1, words, res);
                break;
            }
        }
    }
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;
        for(int i=0;i<words[0].length();i++){
            recur(string(1, words[0][i]), 0, words, res);
        }
        return res;
    }
};