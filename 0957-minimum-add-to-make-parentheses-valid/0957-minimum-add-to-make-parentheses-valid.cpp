class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        stack<int>stk;
        for(int i=0;i<s.size();i++){
            if(stk.empty()){
                if(s[i]==')'){
                    count++;
                }
                else{
                    stk.push(s[i]);
                }
            }
            else if(s[i]=='('){
                stk.push(s[i]);
            }
            else{
                stk.pop();
            }
        }
        return count+stk.size();
    }
};