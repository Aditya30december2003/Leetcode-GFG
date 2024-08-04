class Solution {
public:
    int minAddToMakeValid(string s) {
        int left=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            //opening
            if(s[i]=='('){
                left++;
            }
            //closing
            else{
            // if--> )()
             if(left==0){
                count++;
             }
              // if--> ()
             else{
               left--;
             }
          }
        }
        return count+left;
    }
};