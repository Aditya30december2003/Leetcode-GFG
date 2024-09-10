class Solution {
public:
    string makeGood(string s) {
         string ans="";
         stack<char>stk;
         stk.push(s[0]);

        for(int i=1;i<s.size();i++){

            if( !stk.empty() && ( stk.top() == s[i]-32 || stk.top() == s[i]+32 ) ){
                stk.pop();
            }
            else
            stk.push(s[i]);

         }

         while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
         }
         reverse(ans.begin() , ans.end());
         return ans;
    }
};