class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    char ans;
      ans=letters[0];
     if(letters.back()<=target) 
         return ans;
        int i=0;
        int j=letters.size();
        
        while(i<=j){
            int mid=i+ (j-i)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};