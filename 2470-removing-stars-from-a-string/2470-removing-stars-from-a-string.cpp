class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        for(char&ch:s){
            if(stk.empty()){
                if(ch=='*'){}
                else
                stk.push(ch);
            }
            else{
                if(stk.top()!='*'){
                    if(ch=='*'){
                        stk.pop();
                    }
                    else{
                        stk.push(ch);
                    }
                }
            }

        }

        string ans="";
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};