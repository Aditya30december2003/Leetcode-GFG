class Solution {
public:
    bool isValid(string s) {
       stack<int>stk;
       for(int i=0;i<s.size();i++){
        if(stk.empty()){
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                return false;
            }
            else{
                stk.push(s[i]);
            }
        }
        else if(s[i]=='('||s[i]=='{'||s[i]=='['){
           stk.push(s[i]); 
        }
        else{
            if(s[i]==')'){
                if(stk.top()=='('){
                    stk.pop();
                }
                else{
                    return 0;
                }
            }
            else if(s[i]=='}'){
                if(stk.top()=='{'){
                    stk.pop();
                }
                else{
                    return 0;
                }
            }
            else{
                if(stk.top()=='['){
                    stk.pop();
                }
                else{
                    return 0;
                }
            }
        }
    }
       return stk.empty(); 
    }
};