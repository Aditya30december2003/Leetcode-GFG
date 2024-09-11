class Solution {
public:
    void Convert(string&str , string&c){
     stack<char>stk;

     int i=0;
     while(i<str.size()){
        if(str[i]=='#'){
            if(!stk.empty()){
             stk.pop();
            }
        }
        else{
            stk.push(str[i]);
        }
        i++;
     }
     while(!stk.empty()){
        c+=stk.top();
        stk.pop();
     }
    
    }
    bool backspaceCompare(string s, string t) {
        string s1="";
        string t1="";

        Convert(s , s1);
        Convert(t , t1);

        return s1 == t1;
    }
};