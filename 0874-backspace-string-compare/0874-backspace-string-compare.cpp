class Solution {
private:
string netString(string s){
    stack<char>stk;
    for(int i=0;i<s.size();i++){
       if(s[i]=='#'){
        if(!stk.empty()){
            stk.pop();
        }
       }
       else{
        stk.push(s[i]);
       }
    }
    string ans="";
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        return ans;
}
public:
    bool backspaceCompare(string s, string t) {
       string trueS=netString(s);
       string trueT=netString(t);
       return trueS==trueT; 
    }
};