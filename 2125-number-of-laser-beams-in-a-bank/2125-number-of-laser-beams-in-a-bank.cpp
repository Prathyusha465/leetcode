class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int prev=0,res=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(auto it:bank[i]){
                if(it=='1')
                    count++;
            }
            if(count){
                res=res+prev*count;
                prev=count;
                
            }
        }
        return res;
    }
};