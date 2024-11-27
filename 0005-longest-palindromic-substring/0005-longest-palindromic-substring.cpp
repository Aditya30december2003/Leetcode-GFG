class Solution {
public:
    bool Solve(string&s , int i , int j){
        if(i>=j)
        return true;

        if(s[i]==s[j])
        return Solve(s , i+1 , j-1);

        return false;
    }
    string longestPalindrome(string s) {
        int maxLen=INT_MIN;
        int start=0;

        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(Solve(s,i,j)){
                    if(j-i+1>maxLen){
                      maxLen=j-i+1;
                      start=i;
                    }
                }
            }
        }
        return s.substr(start , maxLen);
    }
};