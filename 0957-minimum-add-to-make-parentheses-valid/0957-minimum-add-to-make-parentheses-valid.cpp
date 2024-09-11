class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stk;

        int i=0;
        while(i<s.size()){
            if(stk.empty()){
                stk.push(s[i]);
            }

            else{
                if(stk.top()=='('){
                    if(s[i]==')'){
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }
                else if(stk.top()=='{'){
                    if(s[i]=='}'){
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }

                else{
                    if(s[i]==']'){
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }

            }
            i++;
        }
        return stk.size();
    }
};