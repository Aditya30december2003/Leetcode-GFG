class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){ //opening
              stk.push(s[i]);
            }
            else{ //closing
               if(stk.empty()){
                return 0;
               }
               else if(s[i]==')'){
                if(stk.top()!='('){
                    return 0;
                }
                else{
                    stk.pop();
                }
               }
                else if(s[i]=='}'){
                if(stk.top()!='{'){
                    return 0;
                }
                else{
                    stk.pop();
                }
               }
                else{
                if(stk.top()!='['){
                    return 0;
                }
                else{
                    stk.pop();
                }
               }
            }

        }
        return stk.empty(); // if empty that means valid
    }
};