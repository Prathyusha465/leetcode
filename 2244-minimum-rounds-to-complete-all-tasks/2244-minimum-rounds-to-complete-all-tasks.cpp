class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>m1;
        for(auto it:tasks)
            m1[it]++;
        int count=0;
        for(auto it:m1){
            if(it.second<2){
                return -1;
            }
            else{
               if(it.second%3==0)
                   count=count+it.second/3;
                else
                    count=count+it.second/3+1;
            }
        }
        return count;
    }
};