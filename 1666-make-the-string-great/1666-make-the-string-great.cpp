class Solution {
public:
    string makeGood(string s) {
        //can be done with a stack
        stack<char>stk;
        stk.push(s[0]);
        for(int i=1;i<s.size();i++){
         if(!stk.empty() && (stk.top() == s[i]-32 || stk.top()== s[i]+32)){
          stk.pop();
         }
         else
         stk.push(s[i]);
        }
        string result="";
        while(!stk.empty()){
            result+=stk.top();
            stk.pop();
        }
    reverse(result.begin() , result.end());
    return result;
    }
};