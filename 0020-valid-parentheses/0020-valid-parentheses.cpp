class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0) return 1;
        stack<char>stk;
        int i=0;
        while(i<s.size()){
            if(stk.empty()){
                if(s[i]==')' || s[i]=='}' || s[i]==']'){
                    return false;
                }
                else{
                    stk.push(s[i]);
                }
            }

            else{
                if(stk.top()=='('){
                    if(s[i]==')')
                    {
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }
                else if(stk.top()=='{'){
                    if(s[i]=='}')
                    {
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }
                
                else{
                    if(s[i]==']')
                    {
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }
            }
            i++;
        }

        if(stk.empty())
        return true;

        return false;
    }
};