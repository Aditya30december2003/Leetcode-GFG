class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>stack;
        for(int i=0;i<s.size();i++){
            stack.push(s[i]);
        }
        int i=0;
        while(!stack.empty()){
            s[i]=stack.top();
            i++;
            stack.pop();
        }
    }
};