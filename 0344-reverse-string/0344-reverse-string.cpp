class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>stk;
        for(int i=0;i<s.size();i++){
            stk.push(s[i]);
        }
        int i=0;
        while(!stk.empty()){
            s[i]=stk.top();
            i++;
            stk.pop();
        }
    }
};