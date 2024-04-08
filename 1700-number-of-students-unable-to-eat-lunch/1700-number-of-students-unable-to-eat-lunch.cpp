class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int onestu=0;
    int zerostu=0;
    int tstudents=0;
  for(int i=0;i<students.size();i++){
      if(students[i]==0) 
          zerostu++;
      else
          onestu++;
      tstudents++;
  }
     for(int i=0;i<sandwiches.size();i++) {
         if(sandwiches[i]==0) {
             if(zerostu>0) {
                 zerostu--;
                 tstudents--;
             }
             else
                 return tstudents;
         }
         else{
             if(onestu>0) {
                 onestu--;
                 tstudents--;
             }
             else
                 return tstudents;
         }
     }
        return tstudents;
    }
};