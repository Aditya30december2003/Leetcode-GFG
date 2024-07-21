class Solution {
public:
    string reverseWords(string s) {
        int i=0 , n=s.size();
        string ans="";
        while(i<n){
            string temp="";
            while(s[i]==' ' && i<n){   //while because there can be multiple spaces
                i++;
            }
            while(s[i]!=' '&&i<n){
            temp+=s[i];
            i++;
            }
        if(temp.size()>0){  //if temp exist krta hai to
          if(ans.size()==0){
            ans=temp;
          }
          else{
            ans =temp+' '+ans;  // whole answer is in this line!!!
          }
        }
        }
        return ans;
    }
}; 