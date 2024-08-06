class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stk;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){ //opening
              stk.push(s[i]);
            }
            else{ // closing bracket
             if(stk.empty()){
                count++;
             }
             else{
                stk.pop();
             }
            }
        }
        return count+stk.size();
    }
};