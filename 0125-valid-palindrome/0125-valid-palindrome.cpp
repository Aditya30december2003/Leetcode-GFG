class Solution {
public:
    bool isPalindrome(string s) {
      string ans="";
      int first=0 , second=0;
      while(second<s.size()){
        if(isalnum(s[second])){
          ans.push_back(tolower(s[second]));
          first++;
        }
        second++;
      }
      int start=0 , end=ans.size()-1;
      while(start<end){
        if(ans[start]!=ans[end]){
            return false;
        }
        start++;
        end--;
      }
      return true;
    }
};