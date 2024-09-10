class Solution {
public:
    bool check(string s){
        int start=0 , end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end])
            return false;

            start++;
            end--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string str="";
        for(int i=0 ;i<s.size();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                str+=tolower(s[i]);
            }
        }

        return check(str);
    }
};