class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stack<string>stk;

        int i=0;
        while(i<s.size()){
            string word="";

            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            
            if(!word.empty())
            stk.push(word);

            i++;
        }
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();

            if(!stk.empty())
            ans+=" ";
        }
    return ans;
    }
};